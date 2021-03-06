
#ifndef __NRF24_HAL_H
#define __NRF24_HAL_H


// Hardware abstraction layer for NRF24L01+ transceiver (hardware depended functions)
// GPIO pins definition
// GPIO pins initialization and control functions
// SPI transmit functions


// Peripheral libraries
#include "stm32f4xx_hal.h"



// SPI port peripheral
#define nRF24_SPI_PORT             SPI1

// nRF24 GPIO peripherals

// CE (chip enable) pin (PA3)
#define nRF24_CE_PORT              GPIOA
#define nRF24_CE_PIN               GPIO_PIN_3
#define nRF24_CE_L()               HAL_GPIO_WritePin(nRF24_CE_PORT, nRF24_CE_PIN, GPIO_PIN_RESET)
#define nRF24_CE_H()               HAL_GPIO_WritePin(nRF24_CE_PORT, nRF24_CE_PIN, GPIO_PIN_SET)


// CSN (chip select negative) pin (PA14)
#define nRF24_CSN_PORT             GPIOA
#define nRF24_CSN_PIN              GPIO_PIN_4


#define nRF24_CSN_L()              HAL_GPIO_WritePin(nRF24_CSN_PORT, nRF24_CSN_PIN, GPIO_PIN_RESET)
#define nRF24_CSN_H()              HAL_GPIO_WritePin(nRF24_CSN_PORT, nRF24_CSN_PIN, GPIO_PIN_SET)

// IRQ pin (PB10)
#define nRF24_IRQ_PORT             GPIOC
#define nRF24_IRQ_PIN              GPIO_Pin_5


// Function prototypes
void nRF24_GPIO_Init(void);
uint8_t nRF24_LL_RW(uint8_t data);

#endif // __NRF24_HAL_H
