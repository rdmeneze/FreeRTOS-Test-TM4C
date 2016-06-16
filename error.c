#include <stddef.h>
#include <stdint.h>
#include "defs.h"

extern void __error__(char *pcFilename, uint32_t ulLine)
{
    return;
}


void vApplicationStackOverflowHook( TaskHandle_t xTask, char *pcTaskName )
{
    return;
}
