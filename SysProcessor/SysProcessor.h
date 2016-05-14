/**
 * @file 	SysProcessor.h
 * @brief	Configure the processor clock
 * @author	Rafael Dias <rdmeneze@gmail.com>
 * @date 	dez/2015
 * */


#ifndef SYSPROCESSOR_H
#define SYSPROCESSOR_H

#include "defs.h"

/**
 * @brief	Configure the system clock
 * @return	processor clock configured
 * */
DWORD SetSystemClock( void );

/**
 * @brief	read the configurated processor clock
 * @return 	processor clock configured
 * */
DWORD GetSystemClock( void );

#endif /*  */
