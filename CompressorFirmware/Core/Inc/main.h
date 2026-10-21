/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32l0xx_hal.h"

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
#define ADC_BUF_SIZE 64

#define CONTROL_ADC_MIN 50.0f
#define CONTROL_ADC_MAX 4095.0f
#define CONTROL_ADC_CENTER 1700.0f

#define OUTPUT_ADC_MIN 50.0f
#define OUTPUT_ADC_MAX 4095.0f
#define OUTPUT_ADC_CENTER 1700.0f
/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
float getADC1Average(uint16_t* buf);
float getADC2Average(uint16_t* buf);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define CONTROL_ADC_Pin GPIO_PIN_1
#define CONTROL_ADC_GPIO_Port GPIOA
#define OUTPUT_ADC_Pin GPIO_PIN_2
#define OUTPUT_ADC_GPIO_Port GPIOA
#define LED_LATCH_Pin GPIO_PIN_4
#define LED_LATCH_GPIO_Port GPIOA
#define LED_SCK_Pin GPIO_PIN_5
#define LED_SCK_GPIO_Port GPIOA
#define LED_MOSI_Pin GPIO_PIN_7
#define LED_MOSI_GPIO_Port GPIOA
#define LED_NRST_Pin GPIO_PIN_0
#define LED_NRST_GPIO_Port GPIOB
#define BYP_IN_Pin GPIO_PIN_8
#define BYP_IN_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
