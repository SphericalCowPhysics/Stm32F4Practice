/**
  ******************************************************************************
  * @file           : hwConfig.h
  * @brief          : Code to configure the MCU devices (hardware)
  ******************************************************************************
  */
#ifndef __HWCONFIG_H__
#define __HWCONFIG_H__

#ifdef __cplusplus
extern "C" {
#endif
	
/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal_conf.h"
#include <usbd_core.h>
#include <usbd_cdc.h>
#include "usbd_cdc_if.h"
#include <usbd_desc.h>

/* Exported variables -------------------------------------------------------*/
extern ADC_HandleTypeDef hadc1;
extern SPI_HandleTypeDef hspi2;

/* Exported functions prototypes ---------------------------------------------*/
void SystemClock_Config(void);
void InitUsb(void);
void MX_GPIO_Init(void);
void MX_ADC1_Init(void);
void MX_NVIC_Init(void);
void MX_SPI2_Init(void);

/* Defines ---------------------------------------------------------------------*/	
#define Pin_LedGreen						GPIO_PIN_13
	
#ifdef __cplusplus
}
#endif

#endif // __HWCONFIG_H__