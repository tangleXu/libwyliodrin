#ifndef RASPBERRYPI_H
#define RASPBERRYPI_H

#include <mcp23008.h>

#ifdef __cplusplus
extern "C" {
#endif

int grovepiSetup (int basePin, int i2caddr);

#ifdef __cplusplus
}
#endif

#endif
