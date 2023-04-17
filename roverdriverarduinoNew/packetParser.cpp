#include <Arduino.h>
#include <string.h>
#include "roverConfig.h"
#include "roverdriverarduino.h"

/**************************************************************************/
/*!
    @brief  Casts the four bytes at the specified address to a float
*/
/**************************************************************************/
float parsefloat(uint8_t *buffer) {
  float f;
  memcpy(&f, buffer, 4);
  return f;
}

/**************************************************************************/
/*!
    @brief  Casts the buffer address to a string then converts it to a float
*/
/**************************************************************************/
int parseint(uint8_t *buffer) { return atoi((const char *)buffer); }

/**************************************************************************/
/*!
    @brief  Prints a hexadecimal value in plain characters
    @param  data      Pointer to the byte data
    @param  numBytes  Data length in bytes
*/
/**************************************************************************/
void printHex(const uint8_t *data, const uint32_t numBytes) {
  uint32_t szPos;
  for (szPos = 0; szPos < numBytes; szPos++) {
    DEBUG_PRINT(F("0x"));
    // Append leading 0 for small values
    if (data[szPos] <= 0xF) {
      DEBUG_PRINT(F("0"));
      DEBUG_PRINT2(data[szPos] & 0xf, HEX);
    } else {
      DEBUG_PRINT2(data[szPos] & 0xff, HEX);
    }
    // Add a trailing space if appropriate
    if ((numBytes > 1) && (szPos != numBytes - 1)) {
      DEBUG_PRINT(F(" "));
    }
  }
  DEBUG_PRINTLN();
}
