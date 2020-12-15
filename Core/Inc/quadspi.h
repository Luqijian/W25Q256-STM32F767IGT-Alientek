/*
 * @Description: 
 * @Company: Optimus Prime, Inc.
 * @Author: Qijian Lu
 * @Date: 2020-12-08 18:25:27
 * @LastEditors: Qijian Lu
 * @LastEditTime: 2020-12-15 19:50:26
 */
/**
  ******************************************************************************
  * @file    quadspi.h
  * @brief   This file contains all the function prototypes for
  *          the quadspi.c file
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __QUADSPI_H__
#define __QUADSPI_H__

#ifdef __cplusplus
extern "C"
{
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

    /* USER CODE BEGIN Includes */

    /* USER CODE END Includes */

    extern QSPI_HandleTypeDef hqspi;

    /* USER CODE BEGIN Private defines */
    uint8_t CSP_QUADSPI_Init(void);
    uint8_t CSP_QSPI_EraseSector(uint32_t EraseStartAddress, uint32_t EraseEndAddress);
    uint8_t CSP_QSPI_WriteMemory(uint8_t *buffer, uint32_t address, uint32_t buffer_size);
    uint8_t CSP_QSPI_ReadMemory(uint8_t *buffer, uint32_t address, uint32_t buffer_size);
    uint8_t CSP_QSPI_EnableMemoryMappedMode(void);
    uint8_t CSP_QSPI_Erase_Chip(void);
    /* USER CODE END Private defines */

    void MX_QUADSPI_Init(void);

/* USER CODE BEGIN Prototypes */

/* W25Q256 memory parameters*/
#define MEMORY_FLASH_SIZE 0x2000000 /* 256 MBits*/
#define MEMORY_BLOCK_SIZE 0x10000   /* 1024 sectors of 64KBytes */
#define MEMORY_SECTOR_SIZE 0x1000   /* 16384 subsectors of 4kBytes */
#define MEMORY_PAGE_SIZE 0x100      /* 262144 pages of 256 bytes */
// #define MEMORY_PAGE_SIZE 0x1000 /* 4K bytes */

/* W25Q256  commands */
#define WRITE_ENABLE_CMD 0x06
#define READ_STATUS_REG_CMD 0x05
#define READ_STATUS_REG2_CMD 0x35
#define WRITE_STATUS_REG2_CMD 0x31
#define ENTER_4_BYTE_ADD_CMD 0xB7
#define ENTER_QPI_MODE_CMD 0x38
#define EXIT_QPI_MODE_CMD 0xFF
#define WRITE_VOL_CFG_REG_CMD 0xC0
#define SECTOR_ERASE_CMD 0x20
#define CHIP_ERASE_CMD 0xC7
#define QUAD_IN_FAST_PROG_CMD 0x02
#define READ_CONFIGURATION_REG_CMD 0xC0
#define QUAD_OUT_FAST_READ_CMD 0x0B
#define RESET_ENABLE_CMD 0x66
#define RESET_EXECUTE_CMD 0x99
#define DUMMY_CLOCK_CYCLES_READ_QUAD 8
    /* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __QUADSPI_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
