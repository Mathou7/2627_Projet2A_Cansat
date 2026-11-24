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
#include "stm32g4xx_hal.h"

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
#define PWM_Pin GPIO_PIN_0
#define PWM_GPIO_Port GPIOA
#define MesBat_Pin GPIO_PIN_1
#define MesBat_GPIO_Port GPIOA
#define VCP_RX_Pin GPIO_PIN_2
#define VCP_RX_GPIO_Port GPIOA
#define VCP_TX_Pin GPIO_PIN_3
#define VCP_TX_GPIO_Port GPIOA
#define INT_IMU_Pin GPIO_PIN_4
#define INT_IMU_GPIO_Port GPIOA
#define INT_BARO_Pin GPIO_PIN_5
#define INT_BARO_GPIO_Port GPIOA
#define LED_Pin GPIO_PIN_6
#define LED_GPIO_Port GPIOA
#define CS_SD_Pin GPIO_PIN_0
#define CS_SD_GPIO_Port GPIOB
#define SDA_Pin GPIO_PIN_8
#define SDA_GPIO_Port GPIOA
#define SCL_Pin GPIO_PIN_9
#define SCL_GPIO_Port GPIOA
#define SPI_SCK_Pin GPIO_PIN_3
#define SPI_SCK_GPIO_Port GPIOB
#define MISO_Pin GPIO_PIN_4
#define MISO_GPIO_Port GPIOB
#define MOSI_Pin GPIO_PIN_5
#define MOSI_GPIO_Port GPIOB
#define BTN_Pin GPIO_PIN_6
#define BTN_GPIO_Port GPIOB
#define SD_DET_Pin GPIO_PIN_7
#define SD_DET_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
