/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : RNG1.h
**     Project     : Assignment 1
**     Processor   : MK22FN512VDC12
**     Component   : RNG_LDD
**     Version     : Component 01.070, Driver 01.02, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2020-09-12, 15:33, # CodeGen: 6
**     Abstract    :
**         This component implements the Random Number Generator/Accelerator (RNGB/RNGA) driver.
**     Settings    :
**          Component name                                 : RNG1
**          Device                                         : RNG
**          Interrupt service                              : Disabled
**          Settings                                       : 
**            High assurance                               : Enabled
**          Initialization                                 : 
**            Sleep                                        : no
**            Start RNGA                                   : yes
**            Entropy register init                        : Enabled
**              Entropy value                              : 12345
**            Event mask                                   : 
**              OnError                                    : Enabled
**            Auto initialization                          : no
**     Contents    :
**         Init            - LDD_TDeviceData* RNG1_Init(LDD_TUserData *UserDataPtr);
**         Deinit          - void RNG1_Deinit(LDD_TDeviceData *DeviceDataPtr);
**         SetEventMask    - LDD_TError RNG1_SetEventMask(LDD_TDeviceData *DeviceDataPtr, LDD_TEventMask...
**         GetEventMask    - LDD_TEventMask RNG1_GetEventMask(LDD_TDeviceData *DeviceDataPtr);
**         GetStatus       - uint32_t RNG1_GetStatus(LDD_TDeviceData *DeviceDataPtr);
**         InsertEntropy   - void RNG1_InsertEntropy(LDD_TDeviceData *DeviceDataPtr, uint32_t Value);
**         Main            - void RNG1_Main(LDD_TDeviceData *DeviceDataPtr);
**         GetRandomNumber - LDD_TError RNG1_GetRandomNumber(LDD_TDeviceData *DeviceDataPtr, uint32_t...
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file RNG1.h
** @version 01.02
** @brief
**         This component implements the Random Number Generator/Accelerator (RNGB/RNGA) driver.
*/         
/*!
**  @addtogroup RNG1_module RNG1 module documentation
**  @{
*/         


#ifndef __RNG1_H
#define __RNG1_H

/* MODULE RNG1. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "RNGA_PDD.h"

#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 

typedef struct {
  LDD_TUserData *UserData;             /* Pointer to user data */
  LDD_TEventMask EventMask;            /* Enable/Disable events mask */
} RNG1_TDeviceData;

typedef RNG1_TDeviceData *RNG1_TDeviceDataPtr; /* Pointer to the device data structure. */
/*! Peripheral base address of a device allocated by the component. This constant can be used directly in PDD macros. */
#define RNG1_PRPH_BASE_ADDRESS  0x40029000U
  
/* Methods configuration constants - generated for all enabled component's methods */
#define RNG1_Init_METHOD_ENABLED       /*!< Init method of the component RNG1 is enabled (generated) */
#define RNG1_Deinit_METHOD_ENABLED     /*!< Deinit method of the component RNG1 is enabled (generated) */
#define RNG1_SetEventMask_METHOD_ENABLED /*!< SetEventMask method of the component RNG1 is enabled (generated) */
#define RNG1_GetEventMask_METHOD_ENABLED /*!< GetEventMask method of the component RNG1 is enabled (generated) */
#define RNG1_GetStatus_METHOD_ENABLED  /*!< GetStatus method of the component RNG1 is enabled (generated) */
#define RNG1_InsertEntropy_METHOD_ENABLED /*!< InsertEntropy method of the component RNG1 is enabled (generated) */
#define RNG1_Main_METHOD_ENABLED       /*!< Main method of the component RNG1 is enabled (generated) */
#define RNG1_GetRandomNumber_METHOD_ENABLED /*!< GetRandomNumber method of the component RNG1 is enabled (generated) */

/* Events configuration constants - generated for all enabled component's events */
#define RNG1_OnError_EVENT_ENABLED     /*!< OnError event of the component RNG1 is enabled (generated) */

/*
** ===================================================================
**     Method      :  RNG1_Init (component RNG_LDD)
*/
/*!
**     @brief
**         Initializes the device according to design-time
**         configuration properties. Allocates memory for the device
**         data structure. 
**         This method can be called only once. Before the second call
**         of Init the Deinit method must be called first.
**     @param
**         UserDataPtr     - Pointer to device data
**                           structure pointer. This pointer will be
**                           passed to all events as parameter.
**     @return
**                         - Pointer to the dynamically allocated private
**                           structure or NULL if there was an error.
*/
/* ===================================================================*/
LDD_TDeviceData* RNG1_Init(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Method      :  RNG1_Deinit (component RNG_LDD)
*/
/*!
**     @brief
**         Disables the device and frees the device data structure
**         memory.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by Init method. 
*/
/* ===================================================================*/
void RNG1_Deinit(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  RNG1_GetRandomNumber (component RNG_LDD)
*/
/*!
**     @brief
**         This method gets the next random number generated by the RNG.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by Init method. 
**     @param
**         Value           - Pointer to variable where random
**                           number will be stored.
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_FAULT - only for RNG B-type: RNG failed.
**                           Use GetError() method to get error type. 
**                           ERR_NOTAVAIL - Seed was not generated since
**                           last reset. Call GenerateSeed() method -
**                           RNGB, or RNGA is stopped/sleeping.
*/
/* ===================================================================*/
LDD_TError RNG1_GetRandomNumber(LDD_TDeviceData *DeviceDataPtr, uint32_t *Value);

/*
** ===================================================================
**     Method      :  RNG1_SetEventMask (component RNG_LDD)
*/
/*!
**     @brief
**         This method masks the events of the interrupts generated by
**         errors or interrupts generated upon completion of seed and
**         self test modes in the RNGB.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by Init method. 
**     @param
**         EventMask       - Value of the event mask. 
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_PARAM_MASK - Event mask not valid
*/
/* ===================================================================*/
LDD_TError RNG1_SetEventMask(LDD_TDeviceData *DeviceDataPtr, LDD_TEventMask EventMask);

/*
** ===================================================================
**     Method      :  RNG1_GetEventMask (component RNG_LDD)
*/
/*!
**     @brief
**         This Methods returns the status of the interrupt error masks
**         and interrupt completion masks.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by Init method. 
**     @return
**                         - Returns the masks currently set.
*/
/* ===================================================================*/
LDD_TEventMask RNG1_GetEventMask(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  RNG1_GetStatus (component RNG_LDD)
*/
/*!
**     @brief
**         This method returns the value of the RNG status register.
**         Use this method to poll status of RNG when interrupts are
**         disabled. 
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by Init method. 
**     @return
**                         - Return the status of the RNG
*/
/* ===================================================================*/
uint32_t RNG1_GetStatus(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  RNG1_InsertEntropy (component RNG_LDD)
*/
/*!
**     @brief
**         Use this method to insert additional entropy to RNGA
**         (current time using highest precision possible, mouse and
**         keyboard motions...). 
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by Init method. 
**     @param
**         Value           - New entropy value for RNGA.
*/
/* ===================================================================*/
void RNG1_InsertEntropy(LDD_TDeviceData *DeviceDataPtr, uint32_t Value);

/*
** ===================================================================
**     Method      :  RNG1_Main (component RNG_LDD)
*/
/*!
**     @brief
**         This method is available only in polling mode. If interrupt
**         service is disabled this method replaces the RNG interrupt
**         handler. 
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by Init method. 
*/
/* ===================================================================*/
void RNG1_Main(LDD_TDeviceData *DeviceDataPtr);

/* END RNG1. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif
/* ifndef __RNG1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
