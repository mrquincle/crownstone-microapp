#pragma once

#include <cs_MicroappStructs.h>

#ifdef __cplusplus
extern "C" {
#endif

#define OUTPUT CS_MICROAPP_COMMAND_PIN_WRITE
#define INPUT CS_MICROAPP_COMMAND_PIN_READ
#define TOGGLE CS_MICROAPP_COMMAND_PIN_TOGGLE
#define I2C_READ CS_MICROAPP_COMMAND_PIN_I2C_READ
#define I2C_WRITE CS_MICROAPP_COMMAND_PIN_I2C_WRITE

#define HIGH CS_MICROAPP_COMMAND_SWITCH_ON
#define LOW CS_MICROAPP_COMMAND_SWITCH_OFF

#define NUMBER_OF_PINS 2

/*
 * To save space have a single global message object.
 */
extern message_t global_msg;

/*
 * Send a message to the bluenet code. This is the function that is called - in the end - by all the functions
 * that have to reach the microapp code.
 */
int sendMessage(message_t msg);

#ifdef __cplusplus
}
#endif
