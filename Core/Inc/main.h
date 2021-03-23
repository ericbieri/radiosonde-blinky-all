/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
#define RADIO_NSS_Pin GPIO_PIN_13
#define RADIO_NSS_GPIO_Port GPIOC
#define T_MEAS_SEL_HUMITEMP_Pin GPIO_PIN_14
#define T_MEAS_SEL_HUMITEMP_GPIO_Port GPIOC
#define T_MEAS_SEL_MAINTEMP_Pin GPIO_PIN_15
#define T_MEAS_SEL_MAINTEMP_GPIO_Port GPIOC
#define INPUT_MEASURED_VALUE_COUNT_Pin GPIO_PIN_1
#define INPUT_MEASURED_VALUE_COUNT_GPIO_Port GPIOA
#define HUMI_MODE_SELECT_START_Pin GPIO_PIN_2
#define HUMI_MODE_SELECT_START_GPIO_Port GPIOA
#define T_MEAS_SEL0_Pin GPIO_PIN_3
#define T_MEAS_SEL0_GPIO_Port GPIOA
#define ADC_IN5_VBAT_Pin GPIO_PIN_5
#define ADC_IN5_VBAT_GPIO_Port GPIOA
#define ADC_IN6_BUTTON_Pin GPIO_PIN_6
#define ADC_IN6_BUTTON_GPIO_Port GPIOA
#define ADC_IN7_HEATING_MONITOR_Pin GPIO_PIN_7
#define ADC_IN7_HEATING_MONITOR_GPIO_Port GPIOA
#define PRESSURE_DATAFLASH_NSS_Pin GPIO_PIN_2
#define PRESSURE_DATAFLASH_NSS_GPIO_Port GPIOB
#define EXT_USART_TX_PIN3_Pin GPIO_PIN_10
#define EXT_USART_TX_PIN3_GPIO_Port GPIOB
#define EXT_USART_RX_PIN2_Pin GPIO_PIN_11
#define EXT_USART_RX_PIN2_GPIO_Port GPIOB
#define TEMP_MODE_SELECT_START_Pin GPIO_PIN_12
#define TEMP_MODE_SELECT_START_GPIO_Port GPIOB
#define SPI2_SCK_Pin GPIO_PIN_13
#define SPI2_SCK_GPIO_Port GPIOB
#define SPI2_MISO_Pin GPIO_PIN_14
#define SPI2_MISO_GPIO_Port GPIOB
#define SPI2_MOSI_Pin GPIO_PIN_15
#define SPI2_MOSI_GPIO_Port GPIOB
#define RCC_MCO_TO_PRESSURE_MODULE_Pin GPIO_PIN_8
#define RCC_MCO_TO_PRESSURE_MODULE_GPIO_Port GPIOA
#define GPS_RXD_Pin GPIO_PIN_9
#define GPS_RXD_GPIO_Port GPIOA
#define GPS_TXD_Pin GPIO_PIN_10
#define GPS_TXD_GPIO_Port GPIOA
#define NFC_CARRIER_DETECT_EXT_IRQ11_Pin GPIO_PIN_11
#define NFC_CARRIER_DETECT_EXT_IRQ11_GPIO_Port GPIOA
#define POWER_OFF_Pin GPIO_PIN_12
#define POWER_OFF_GPIO_Port GPIOA
#define GPS_RESET_Pin GPIO_PIN_15
#define GPS_RESET_GPIO_Port GPIOA
#define HUMI_SEL0_Pin GPIO_PIN_3
#define HUMI_SEL0_GPIO_Port GPIOB
#define HUMI_SEL1_Pin GPIO_PIN_4
#define HUMI_SEL1_GPIO_Port GPIOB
#define HUMI_SEL2_Pin GPIO_PIN_5
#define HUMI_SEL2_GPIO_Port GPIOB
#define T_MEAS_SEL1_Pin GPIO_PIN_6
#define T_MEAS_SEL1_GPIO_Port GPIOB
#define GREEN_LED_Pin GPIO_PIN_7
#define GREEN_LED_GPIO_Port GPIOB
#define RED_LED_Pin GPIO_PIN_8
#define RED_LED_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
