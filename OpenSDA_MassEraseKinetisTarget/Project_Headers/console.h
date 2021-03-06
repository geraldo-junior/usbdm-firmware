/**
 * @file    console.h
 * @brief   Basic UART routines for console
 * @date    13 June 2015
 */
#include <derivative.h>

 /*
 * *****************************
 * *** DO NOT EDIT THIS FILE ***
 * *****************************
 *
 * This file is generated automatically.
 * Any manual changes will be lost.
 */

#ifndef CONSOLE_H_
#define CONSOLE_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * The following functions are a C-wrapper used by the C library
 * low-level stdio support.
 */
/**
 * Initialises the Console
 */
void console_initialise();
/**
 * Set Console baud rate
 *
 * @param baudRate - the baud rate to use
 */
void console_setBaudRate(int baudRate);
/**
 * Transmits a single character over the Console (blocking)
 *
 * @param ch - character to send
 */
void console_txChar(int ch);
/**
 * Receives a single character over the Console (blocking)
 *
 * @return - character received
 */
int  console_rxChar(void);

#ifdef __cplusplus
}
#endif
#endif /* CONSOLE_H_ */
