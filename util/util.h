#ifndef __UTIL_H__
#define __UTIL_H__

#include "defs.h"

#define GET_ARRAY_LEN( x ) ( sizeof( x )/sizeof( x[0] ) )

#define GETBIT( x, bit ) ( (x & (1<<bit)) >> bit )

/**
 *  \brief  get the high Nibble of a byte 
 *  \param[in]  bValue  byte to get the high nibble
 *  \return     high nibble
 */
 BYTE HINIBBLE( BYTE bValue );

/**
 *  \brief  get the Low Nibble of a byte 
 *  \param[in]  bValue  byte to get the low nibble
 *  \return     low nibble
 */
 BYTE LONIBBLE( BYTE bValue );

/**
 *  \brief  get the high byte of a byte 
 *  \param[in]  wValue  byte to get the high byte
 *  \return     high byte
 */
 BYTE HIBYTE( WORD wValue );

/**
 *  \brief  get the low byte of a byte 
 *  \param[in]  wValue  byte to get the low byte
 *  \return     low byte
 */
 BYTE LOBYTE( WORD wValue );

/**
 *  \brief  get the high word of a dword
 *  \param[in]  dwValue byte to get the high word
 *  \return     high word
 */
 WORD HIWORD( DWORD dwValue );

/**
 *  \brief  get the low word of a dword
 *  \param[in]  dwValue byte to get the low word
 *  \return     low word
 */
 WORD LOWORD( DWORD dwValue );

/**
 *  \brief  make a byte from two nibbles
 *  \param[in]  bLow low nibble
 *  \param[in]  bHigh high nibble
 */
 BYTE MAKEBYTE( BYTE bLow,  BYTE bHigh );

/**
 *  \brief  make a word from two bytes
 *  \param[in]  bLow low byte
 *  \param[in]  bHigh high byte
 */
 WORD MAKEWORD( BYTE bLow,  BYTE bHigh );

/**
 *  \brief  make a dword from two words
 *  \param[in]  bLow low word
 *  \param[in]  bHigh high word
 */
 DWORD MAKEDWORD( WORD wLow,  WORD wHigh );

/**
 *  \brief convert from BDC to decimal
 *  \param[in]  bBCD binary code decimal data
 *  \return data decoded
 */
 BYTE BCDtoDec( BYTE bBCD );
 BYTE DectoBCD( BYTE bDec );


#endif //~ __UTIL_H__
