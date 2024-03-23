/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Pin_LcdDE_Pin GPIO_PIN_10
#define Pin_LcdDE_GPIO_Port GPIOF
#define Pin_Adc1In13_Pin GPIO_PIN_3
#define Pin_Adc1In13_GPIO_Port GPIOC
#define Pin_LcdB5_Pin GPIO_PIN_3
#define Pin_LcdB5_GPIO_Port GPIOA
#define Pin_LcdVsync_Pin GPIO_PIN_4
#define Pin_LcdVsync_GPIO_Port GPIOA
#define Pin_LcdG5_Pin GPIO_PIN_6
#define Pin_LcdG5_GPIO_Port GPIOA
#define Pin_LcdR3_Pin GPIO_PIN_0
#define Pin_LcdR3_GPIO_Port GPIOB
#define Pin_LcdR6_Pin GPIO_PIN_1
#define Pin_LcdR6_GPIO_Port GPIOB
#define Pin_LcdG3_Pin GPIO_PIN_11
#define Pin_LcdG3_GPIO_Port GPIOE
#define Pin_LcdB4_Pin GPIO_PIN_12
#define Pin_LcdB4_GPIO_Port GPIOE
#define Pin_LcdClk_Pin GPIO_PIN_14
#define Pin_LcdClk_GPIO_Port GPIOE
#define Pin_LcdR7_Pin GPIO_PIN_15
#define Pin_LcdR7_GPIO_Port GPIOE
#define Pin_LcdG4_Pin GPIO_PIN_10
#define Pin_LcdG4_GPIO_Port GPIOB
#define Pin_LcdG5B11_Pin GPIO_PIN_11
#define Pin_LcdG5B11_GPIO_Port GPIOB
#define Pin_LcdB3_Pin GPIO_PIN_10
#define Pin_LcdB3_GPIO_Port GPIOD
#define Pin_LcdHSync_Pin GPIO_PIN_6
#define Pin_LcdHSync_GPIO_Port GPIOC
#define Pin_LcdG6_Pin GPIO_PIN_7
#define Pin_LcdG6_GPIO_Port GPIOC
#define Pin_LcdR4_Pin GPIO_PIN_11
#define Pin_LcdR4_GPIO_Port GPIOA
#define Pin_LcdR5_Pin GPIO_PIN_12
#define Pin_LcdR5_GPIO_Port GPIOA
#define Pin_LcdG7_Pin GPIO_PIN_3
#define Pin_LcdG7_GPIO_Port GPIOD
#define Pin_LcdB6_Pin GPIO_PIN_8
#define Pin_LcdB6_GPIO_Port GPIOB
#define Pin_LcdB7_Pin GPIO_PIN_9
#define Pin_LcdB7_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
