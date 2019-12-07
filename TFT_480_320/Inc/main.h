/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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
#define LCD_RST_PIN_Pin GPIO_PIN_0
#define LCD_RST_PIN_GPIO_Port GPIOC

#define LCD_CS_PIN_Pin GPIO_PIN_1
#define LCD_CS_PIN_GPIO_Port GPIOC

#define DB_02_PIN_Pin GPIO_PIN_2
#define DB_02_PIN_GPIO_Port GPIOC

#define DB_03_PIN_Pin GPIO_PIN_3
#define DB_03_PIN_GPIO_Port GPIOC

#define DB_00_PIN_Pin GPIO_PIN_0
#define DB_00_PIN_GPIO_Port GPIOA

#define DB_01_PIN_Pin GPIO_PIN_1
#define DB_01_PIN_GPIO_Port GPIOA

#define DB_05_PIN_Pin GPIO_PIN_5
#define DB_05_PIN_GPIO_Port GPIOA

#define DB_06_PIN_Pin GPIO_PIN_6
#define DB_06_PIN_GPIO_Port GPIOA

#define DB_07_PIN_Pin GPIO_PIN_7
#define DB_07_PIN_GPIO_Port GPIOA

#define LCD_WR_PIN_Pin GPIO_PIN_4
#define LCD_WR_PIN_GPIO_Port GPIOC

#define LCD_RS_PIN_Pin GPIO_PIN_5
#define LCD_RS_PIN_GPIO_Port GPIOC

#define DB_13_PIN_Pin GPIO_PIN_0
#define DB_13_PIN_GPIO_Port GPIOB

#define DB_14_PIN_Pin GPIO_PIN_2
#define DB_14_PIN_GPIO_Port GPIOB

#define DB_04_PIN_Pin GPIO_PIN_6
#define DB_04_PIN_GPIO_Port GPIOC

#define DB_08_PIN_Pin GPIO_PIN_8
#define DB_08_PIN_GPIO_Port GPIOA

#define DB_09_PIN_Pin GPIO_PIN_9
#define DB_09_PIN_GPIO_Port GPIOA

#define DB_10_PIN_Pin GPIO_PIN_10
#define DB_10_PIN_GPIO_Port GPIOA

#define DB_11_PIN_Pin GPIO_PIN_11
#define DB_11_PIN_GPIO_Port GPIOA

#define DB_12_PIN_Pin GPIO_PIN_12
#define DB_12_PIN_GPIO_Port GPIOA

#define DB_15_PIN_Pin GPIO_PIN_15
#define DB_15_PIN_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
