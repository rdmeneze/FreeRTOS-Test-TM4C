#include <stddef.h>
#include <stdint.h>
#include "defs.h"

extern void __error__(char *pcFilename, uint32_t ulLine)
{
    return;
}


void vApplicationStackOverflowHook( TaskHandle_t xTask, char *pcTaskName )
{
    /*
    char *name;
    TaskHandle_t *pxT;

    name = pcTaskName;
    pxT  = &xTask;
    */
    while(1);
}

//vApplicationTickHook

