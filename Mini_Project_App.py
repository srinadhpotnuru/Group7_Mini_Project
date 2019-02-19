#!/usr/bin/env python
# coding: utf-8

# In[ ]:


from coapthon.client.helperclient import HelperClient
from twisted.internet import task, reactor
import logging
import datetime
import threading
import time

logging.getLogger("coapthon").setLevel(logging.WARNING)

#constants
LUX_TH_DAY_HIGH = 30000
LUX_TH_DAY_LOW = 10000
SOIL_MOIST = 2500
MOTOR_ON_LIMIT = 10
DAY_TEMP = 20

ENABLE_LOGS = True
enable=1


def init_light():
    if enable:
        print("init_light")
    lightclient = HelperClient(server=('fd11:22::9', 5683))
    return lightclient

def init_temp():
    if enable:
        print("init_temp")
    tempclient = HelperClient(server=('fd11:22::9', 5683))
    return tempclient

def init_accel():
    if enable:
        print("init_accel")
    accelclient = HelperClient(server=('fd11:22::9', 5683))
    return accelclient

def init_soil():
    if enable:
        print("init_soil")
    soilclient = HelperClient(server=('fd11:22::3', 5683))
    return soilclient

def init_pump():
    if enable:
        print("init_pump")
    pumpclient = HelperClient(server=('fd11:22::3', 5683))
    return pumpclient

def read_temp(tempclient):
    tempresponse = tempclient.get('/tempsensor/temperature')
    tempresponse.payload
    tempvalue = int(tempresponse.payload)
    if enable:
        print("reading Temperature:",tempvalue)
    return tempvalue

def read_light(lightclient):
    lightresponse = lightclient.get('/lightsensor/lumens')
    lightresponse.payload
    lightvalue = int(lightresponse.payload)
    if enable:
        print("reading light:",lightvalue)
    return lightvalue

def read_accel(accelclient):
    accelresponse = accelclient.get('/accelsensor/accraw')
    accelresponse.payload
    accelvalue = int(accelresponse.payload)
    if enable:
        print("reading Accelerometer:",accelvalue)
    return accelvalue

def read_soil(soilclient):
    soilresponse = soilclient.get('/soil/humidity')
    soilresponse.payload
    soilvalue = int(soilresponse.payload)
    if enable:
        print("reading Soil Moisture:",soilvalue)
    return soilvalue

def pump_state(pumpclient):
    pumpresponse = pumpclient.get('/blinds/state')
    if enable:
        print("Motor:",pumpresponse.payload)
    return True

def pump_control(pumpclient,state):
    if state == 'on':
        pumpresponse = pumpclient.post('/blinds/state','open')
    if state == 'off':
        pumpresponse = pumpclient.post('/blinds/state','closed')
    if enable:
        print("Motor turning",state)
    return True

def check_gesture(accel_data):
    if enable:
        print("Computing Gesture...")
    if((accel_data > 7500) & (accel_data < 20000)):
        return "UP"
    if((accel_data < -7500) & (accel_data > - 20000)):
        return "DOWN"

def day_night():
    currentDT = datetime.datetime.now()
    t = int(currentDT.strftime("%H"))
    if t > 6 and t < 18:
        return "day"
    else:
        #return "night"
        return "day"

def profile_check(lux,temp,humidity):
    day_or_night = day_night()
    if day_or_night == "day":
        if lux < LUX_TH_DAY_HIGH and lux > LUX_TH_DAY_LOW and humidity < SOIL_MOIST:
            if temp > DAY_TEMP:
                tap_on(8) #8 seconds during hot
                return
            else:
                tap_on(6) #6 seconds during normal
                return
        if lux < LUX_TH_DAY_HIGH and lux > LUX_TH_DAY_LOW and humidity > SOIL_MOIST:
            tap_on(2) #2 seconds during high moisture
            return
        if humidity < SOIL_MOIST:
            tap_on(4) #4 seconds for other days
            return
        else:
            tap_on(2) #2 seconds default
        return
    return

    
def tap_on(time_on):
    limit_time = min(time_on,MOTOR_ON_LIMIT)
    pump_ID = init_pump();
    #pump_control(pump_ID,'off') #redundant
    pump_control(pump_ID,'on')
    time.sleep(limit_time)
    pump_control(pump_ID,'off')

    
    
#thread def
class ThreadingExample(object):

    def __init__(self, interval=1):

        self.interval = interval
        #accel_ID = init_accel();
        thread = threading.Thread(target=self.run, args=())
        thread.daemon = True                            # Daemonize thread
        thread.start()                                  # Start the execution

    def run(self):
        """ Method that runs forever """
        accel_ID = init_accel();
        global enable
        while True:
            # Do something
            raw = read_accel(accel_ID)
            ret = check_gesture(raw)
            if ret == "UP":
                #pump_control(pump_ID,'off')
                #global enable
                enable = 1
                #print('----------Print logs ON----------')
            if ret == "DOWN":
                #pump_control(pump_ID,'on')
                #global enable
                enable = 0
                #print('----------Print logs OFF----------')
            #print('Doing something imporant in the background')
            #print(enable)
            
            time.sleep(self.interval)

def main():
    print("main starting...")
    #ENABLE_LOGS=True
    light_ID=init_light();
    temp_ID=init_temp();
    #accel_ID = init_accel();
    soil_ID = init_soil();
    
    pump_ID = init_pump();
    pump_control(pump_ID,'off') #redundant
    
    example = ThreadingExample(1) #thread start
    
    while(1):
        #print(read_light(light_ID))
        #print(read_temp(temp_ID))
        humidity = read_soil(soil_ID)
        #raw = read_accel(accel_ID)
        #print(raw)
        pump_state(pump_ID);
        if humidity < 3000 and humidity >= 0:
            profile_check(read_light(light_ID),read_temp(temp_ID),humidity)
            
        
        #print(ret)
        time.sleep(5)
    
    
    
    
if __name__ == "__main__":
    main()


# In[ ]:




