/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#define LED13_Pin GPIO_PIN_13
#define LED13_GPIO_Port GPIOC
#define LED8_Pin GPIO_PIN_0
#define LED8_GPIO_Port GPIOA
#define LED9_Pin GPIO_PIN_1
#define LED9_GPIO_Port GPIOA
#define LED10_Pin GPIO_PIN_2
#define LED10_GPIO_Port GPIOA
#define BT8_Pin GPIO_PIN_8
#define BT8_GPIO_Port GPIOA
#define BT8_EXTI_IRQn EXTI9_5_IRQn
#define BT9_Pin GPIO_PIN_9
#define BT9_GPIO_Port GPIOA
#define BT9_EXTI_IRQn EXTI9_5_IRQn
#define BT10_Pin GPIO_PIN_10
#define BT10_GPIO_Port GPIOA
#define BT10_EXTI_IRQn EXTI15_10_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
