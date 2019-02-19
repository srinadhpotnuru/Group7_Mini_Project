# Group7_Mini_Project

Smart Gardening System

Ad-Hoc Wireless Sensors Lab - Mini Project

In this project you find project source folders for two launchpads. "shade_CC1352R1_LAUNCHXL_tirtos_ccs" will run on launchpad with pump motor relay signal and soil humidity sensor signal pin. And "light_sensor_CC1352R1_LAUNCHXL_tirtos_ccs" will run on launchapd connected with TI Sensor Booster pack. One launchpad will run "ncp_ftd" project found in SimpleLink CC13x2 SDK - v:2.30.00.45

Hardware Setup Needed

	3 x TI CC1352 Launchpads
	BeagleBone Black
	TI Sensor Booster Pack (Accelerometer + Light Sensor)
	Temperature Sensor
	Soil Humidity Sensor
	Pump Motor
	TI Grove interface board
	3.3v Grove Relay switch
	
Will need to import necessary support projects of libopenthread_mtd and libopenthread_ftd from SimpleLink SDK for successful build of all projects.

Launchpad with "ncp_ftd" will be connected with BeagleBone Black for border router function as per the guide provided at http://dev.ti.com/tirex/content/simplelink_academy_cc13x2sdk_2_30_02_00/modules/thread/thread_01_border_router/thread_01_border_router.html

Soil Sensor is powered by 3.3v and Ground on Launchpad and the ADC signal is read by CC1352R1_LAUNCHXL_ADC5 on the launchpad. Pump motor is powered via a relay and the relay is controlled by DIO_20. These connections are made with the help of Grove interface board and Grove jumper cables.

Once the devices form an openthread network, the sensors and motor is accessible through COAP commands to read sensor data and switch on/off motor. Applications with smart garden functionality can control the environment intelligently based on the sensors' data. For that purpose an application named Smart_Garden will work. This reads light and temperature sensors' data with low frequency and estimates the weather. Similarly soil moisture is read periodically. Based on this data a decision to water the plant (duration) can be made and is sent to the pump motor. Accelerometer's data is used to determine gestures of an user. A user can choose to see the data on screen or not and control with the accelerometer.

For the purpose of demo another application is made (Accel_Motor_Demo) to turn on or off the motor based on gesture. While the device with acceleromter is pointing upwards, the pump motor will be on and viceversa. This can be applied in remote control application of pump by an user.

Demo video can be found at:

Smart Garden: https://www.youtube.com/watch?v=X0cz4ez2cIA
Accelerometer and Pump Motor Demo: https://www.youtube.com/watch?v=6jTPhsJbOLk
