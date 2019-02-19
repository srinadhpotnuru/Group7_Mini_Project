/******************************************************************************

 @file images.h

 @brief graphics image declaration for shade example application.

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

#ifndef _IMAGES_H_
#define _IMAGES_H_

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
 Includes
 *****************************************************************************/
/* grlib header defines `NDEBUG`, undefine here to avoid a compile warning */
#ifdef NDEBUG
#undef NDEBUG
#endif

#include <ti/grlib/grlib.h>

/******************************************************************************
 Constants and definitions
 *****************************************************************************/
/** Shade open graphics data, for use by Grlib */
extern const Graphics_Image Images_shadeOpen;
/** Shade closed graphics data, for use by Grlib */
extern const Graphics_Image Images_shadeClosed;
/** Shade drawn graphics data, for use by Grlib */
extern const Graphics_Image Images_shadeDrawn;

#ifdef __cplusplus
}
#endif

#endif /* _IMAGEG_H_ */
