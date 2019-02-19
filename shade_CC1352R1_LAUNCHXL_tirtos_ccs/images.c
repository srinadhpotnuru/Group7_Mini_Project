/******************************************************************************

 @file images.c

 @brief graphics image data definition for lcd display for
        shade example application.

 Group: CMCU, LPC
 Target Device: CC13xx

 ******************************************************************************
 
 Copyright (c) 2017-2018, Texas Instruments Incorporated
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions
 are met:

 *  Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.

 *  Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.

 *  Neither the name of Texas Instruments Incorporated nor the names of
    its contributors may be used to endorse or promote products derived
    from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

 ******************************************************************************
 Release Name: simplelink_cc13x2_sdk_2_30_00_
 Release Date: 2018-10-03 19:52:52
 *****************************************************************************/

/******************************************************************************
 Includes
 *****************************************************************************/
#include "images.h"

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
/* shade open graphics image data */
static const uint8_t shadeOpenImgData[] =
{
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x3f, 0xff, 0xf8, 0x7f, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc,
 0x3f, 0xff, 0xf0, 0x7f, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc,
 0x3f, 0xff, 0xf3, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfc,
 0x3f, 0xff, 0xf3, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfc,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x3f, 0xff, 0xf9, 0xff, 0xff, 0xf0, 0x1c, 0x7f, 0xff, 0xff, 0xff, 0xfc,
 0x3f, 0xff, 0xf8, 0x7f, 0xff, 0xf0, 0x1e, 0xff, 0xff, 0xff, 0xff, 0xfc,
 0x3f, 0xff, 0xfc, 0x3f, 0xff, 0xe0, 0x0f, 0xc0, 0xff, 0xff, 0xff, 0xfc,
 0x3f, 0xff, 0xfe, 0x00, 0xfc, 0x00, 0x0c, 0x40, 0xff, 0xff, 0xff, 0xfc,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x78, 0xf0, 0x7f, 0xff, 0xff, 0xfc,
 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x78, 0xf0, 0xff, 0xff, 0xff, 0xfc,
 0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x18, 0x80, 0x7f, 0xff, 0xff, 0xfc,
 0x3f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x11, 0x80, 0x3f, 0xff, 0xff, 0xfc,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x3f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x31, 0x00, 0x3f, 0xff, 0xff, 0xfc,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x31, 0x00, 0x7f, 0xff, 0xff, 0xfc,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x3f, 0x00, 0xf8, 0x82, 0x1f, 0xfc,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0x8e, 0x3f, 0xc0, 0x00, 0x10, 0xc7, 0xfc,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x03, 0xff, 0xff, 0xfc, 0xfc,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x40, 0x11, 0xff, 0xff, 0xfc, 0xfc,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x40, 0x3f, 0xff, 0xff, 0xfe, 0xfc,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x60, 0x0f, 0xff, 0xff, 0xfc, 0xfc,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7c, 0x01, 0xff, 0xf0, 0x0f, 0xfc,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xf8, 0x03, 0xf0, 0x1f, 0xfc,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0x00, 0x07, 0xff, 0xfc,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xf9, 0xff, 0xff, 0xff, 0xfc,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xf9, 0xff, 0xff, 0xff, 0xfc,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xf9, 0xff, 0xff, 0xff, 0xfc,
 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xe0, 0xff, 0xff, 0xff, 0xfc,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x3f, 0xff, 0xf8, 0x07, 0xff, 0xfe, 0x7f, 0x80, 0x7f, 0xff, 0xff, 0xfc,
 0x3f, 0xff, 0xf8, 0x0f, 0xff, 0xfe, 0x7f, 0x00, 0x3f, 0xff, 0xff, 0xfc,
 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00,
 0x3f, 0xf0, 0x00, 0x00, 0x7f, 0xfe, 0x7e, 0x00, 0x1f, 0xff, 0xff, 0xfc,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x3f, 0xc0, 0x00, 0x00, 0x3f, 0xfe, 0x78, 0x00, 0x07, 0xff, 0xff, 0xfc,
 0x3f, 0xc0, 0x00, 0x00, 0x3f, 0xfe, 0x70, 0x00, 0x07, 0xff, 0xff, 0xfc,
 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfe, 0x70, 0x00, 0x03, 0xff, 0xff, 0xfc,
 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfe, 0x60, 0x00, 0x00, 0x03, 0xff, 0xfc,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x00, 0x00, 0x00, 0x00, 0x1f, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x1f, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x1f, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x3f, 0x0f, 0xc0, 0x3f, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x00, 0x3f, 0x0f, 0xc0, 0x1f, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x3f, 0x0f, 0xc0, 0x1f, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x3f, 0x0f, 0xc0, 0x1f, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x1f, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x10,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x10,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x10,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x0f, 0xc5, 0xf0, 0x7c, 0x1e, 0x3f, 0xaf, 0x17, 0x3e, 0x1f, 0x07, 0xd0,
 0x1c, 0xc7, 0x18, 0xc6, 0x33, 0x19, 0xf1, 0x9c, 0x63, 0x11, 0x8c, 0x70,
 0x18, 0x66, 0x0d, 0x82, 0x61, 0x89, 0xf1, 0x98, 0x41, 0x80, 0x98, 0x30,
 0x10, 0x24, 0x0d, 0x83, 0x61, 0x89, 0xe0, 0x98, 0xc1, 0x83, 0xd8, 0x30,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x10, 0x24, 0x08, 0x80, 0x40, 0x09, 0xa0, 0x90, 0x40, 0x20, 0x90, 0x30,
 0x18, 0x66, 0x18, 0xc2, 0x61, 0x89, 0xe0, 0x98, 0x61, 0x31, 0xd8, 0x70,
 0x0f, 0xc7, 0xf8, 0x7e, 0x61, 0x8f, 0xe0, 0x98, 0x3f, 0x3f, 0xcf, 0xf0,
 0x00, 0x04, 0x40, 0x10, 0x00, 0x03, 0x80, 0x00, 0x08, 0x04, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* Shade open image palette information  */
static const uint32_t shadeOpenImgPalette[]=
{
 0x000000,   0xffffff
};

/* Shade open image information  */
const Graphics_Image Images_shadeOpen =
{
    .bPP = IMAGE_FMT_1BPP_UNCOMP,
    .xSize = 96,
    .ySize = 96,
    .numColors = 2,
    .pPalette = shadeOpenImgPalette,
    .pPixel = shadeOpenImgData,
};

/* shade closed graphics image data */
static const uint8_t shadeClosedImgData[] =
{
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* Shade closed image palette information  */
static const uint32_t shadeClosedImgPalette[]=
{
    0x000000,   0xffffff
};

/* Shade closed image information  */
const Graphics_Image Images_shadeClosed =
{
    .bPP = IMAGE_FMT_1BPP_UNCOMP,
    .xSize = 96,
    .ySize = 96,
    .numColors = 2,
    .pPalette = shadeClosedImgPalette,
    .pPixel = shadeClosedImgData,
};

/* Shade drawn image data  */
static const uint8_t shadeDrawnImgData[] =
{
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x3f, 0xff, 0xfe, 0x7f, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xfe, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xf8, 0x7f, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xf0, 0x7f, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xf3, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xf3, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xf9, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xfb, 0xff, 0xff, 0xfe, 0x1e, 0x7f, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xfb, 0xff, 0xff, 0xf0, 0x1c, 0x7f, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xf8, 0x7f, 0xff, 0xf0, 0x1e, 0xff, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xfc, 0x3f, 0xff, 0xe0, 0x0f, 0xc0, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xfe, 0x00, 0xfc, 0x00, 0x0c, 0x40, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xe0, 0x01, 0xe0, 0x08, 0x40, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0x83, 0xe0, 0x78, 0xf0, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x78, 0xf0, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x78, 0xf0, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x18, 0x80, 0x7f, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x11, 0x80, 0x3f, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x11, 0x80, 0x3f, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x11, 0x80, 0x3f, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x31, 0x00, 0x3f, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x31, 0x00, 0x7f, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x3f, 0x00, 0xf8, 0x82, 0x1f, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0x8e, 0x3f, 0xc0, 0x00, 0x10, 0xc7, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0x80, 0x0f, 0xff, 0xf1, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0f, 0x07, 0xff, 0xff, 0xfc, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x07, 0xff, 0xff, 0xfc, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x40, 0x11, 0xff, 0xff, 0xfc, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x40, 0x3f, 0xff, 0xff, 0xfe, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x60, 0x0f, 0xff, 0xff, 0xfc, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x70, 0x1f, 0xff, 0xff, 0xe1, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x70, 0x1f, 0xff, 0xff, 0xe3, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7c, 0x03, 0xff, 0xfb, 0x8f, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xf8, 0x03, 0xf0, 0x1f, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0x00, 0x07, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xfb, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xf9, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xf9, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x7f, 0xe0, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xfc, 0x1f, 0xff, 0xfe, 0x7f, 0xe0, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xfc, 0x0f, 0xff, 0xfe, 0x7f, 0xc0, 0xff, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xf8, 0x0f, 0xff, 0xfe, 0x7f, 0x80, 0x7f, 0xff, 0xff, 0xfc,
0x3f, 0xff, 0xf8, 0x0f, 0xff, 0xfe, 0x7f, 0x00, 0x3f, 0xff, 0xff, 0xfc,
0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 0x00, 0x00,
0x3f, 0xf0, 0x00, 0x00, 0x7f, 0xfe, 0x7e, 0x00, 0x1f, 0xff, 0xff, 0xfc,
0x3f, 0xe0, 0x00, 0x00, 0x7f, 0xfe, 0x7e, 0x00, 0x1f, 0xff, 0xff, 0xfc,
0x3f, 0xc0, 0x00, 0x00, 0x3f, 0xfe, 0x7c, 0x00, 0x0f, 0xff, 0xff, 0xfc,
0x3f, 0xc0, 0x00, 0x00, 0x3f, 0xfe, 0x78, 0x00, 0x07, 0xff, 0xff, 0xfc,
0x3f, 0xc0, 0x00, 0x00, 0x3f, 0xfe, 0x70, 0x00, 0x07, 0xff, 0xff, 0xfc,
0x00, 0x00, 0x00, 0x00, 0x3f, 0xfe, 0x70, 0x00, 0x03, 0xff, 0xff, 0xfc,
0x00, 0x00, 0x00, 0x00, 0x3f, 0xfe, 0x60, 0x00, 0x00, 0x03, 0xff, 0xfc,
0x00, 0x00, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfc,
0x00, 0x00, 0x00, 0x00, 0x3f, 0x81, 0x80, 0x00, 0x00, 0x01, 0xff, 0xfc,
0x00, 0x00, 0x00, 0x00, 0x1f, 0x81, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x1f, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x1f, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3f, 0x0f, 0xc0, 0x3f, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3f, 0x0f, 0xc0, 0x3f, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3f, 0x0f, 0xc0, 0x3f, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3f, 0x0f, 0xc0, 0x1f, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3f, 0x0f, 0xc0, 0x1f, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x3f, 0x0f, 0xc0, 0x1f, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x1f, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x1f, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x0f, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x10,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x10,
0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x10,
0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x10,
0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x10,
0x0f, 0xc5, 0xf0, 0x7c, 0x1e, 0x3f, 0xff, 0x1f, 0x3e, 0x1f, 0x07, 0xd0,
0x1c, 0xc7, 0x18, 0xc6, 0x33, 0x19, 0xf1, 0x9c, 0x63, 0x11, 0x8c, 0x70,
0x18, 0x66, 0x0d, 0x82, 0x61, 0x89, 0xf1, 0x98, 0x41, 0x80, 0x98, 0x30,
0x10, 0x24, 0x0d, 0x83, 0x61, 0x89, 0xe0, 0x98, 0xc1, 0x83, 0xd8, 0x30,
0x10, 0x34, 0x0d, 0xff, 0x61, 0x89, 0xe0, 0x98, 0xff, 0x9f, 0xd0, 0x10,
0x10, 0x34, 0x0d, 0x80, 0x61, 0x89, 0xe0, 0x98, 0xc0, 0x30, 0xd0, 0x10,
0x10, 0x26, 0x0d, 0x80, 0x61, 0x89, 0xe0, 0x98, 0x40, 0x30, 0xd8, 0x30,
0x18, 0x66, 0x18, 0xc2, 0x61, 0x89, 0xe0, 0x98, 0x61, 0x31, 0xd8, 0x70,
0x0f, 0xc7, 0xf8, 0x7e, 0x61, 0x8f, 0xe0, 0x98, 0x3f, 0x3f, 0xcf, 0xf0,
0x00, 0x04, 0x40, 0x10, 0x00, 0x03, 0x80, 0x00, 0x08, 0x04, 0x00, 0x00,
0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

/* Shade drawn image palette information */
static const uint32_t shadeDrawnImgPalette[]=
{
    0x000000,   0xffffff
};

/* Shade drawn image information */
const Graphics_Image Images_shadeDrawn =
{
    .bPP = IMAGE_FMT_1BPP_UNCOMP,
    .xSize = 96,
    .ySize = 96,
    .numColors = 2,
    .pPalette = shadeDrawnImgPalette,
    .pPixel = shadeDrawnImgData,
};
