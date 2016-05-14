#include "defs.h"
#include <driverlib/sysctl.h>
#include <driverlib/gpio.h>
#include <inc/hw_memmap.h>
#include "util.h"
#include <FreeRTOS.h>
#include <task.h>
#include <SysProcessor.h>
#include <BoardLeds.h>
#include <ttimer.h>

/*****************************************************************************/
volatile unsigned long ulHighFrequencyTimerTicks = 0UL;
/*****************************************************************************/
void ledBlink(void *pvParameters);
uint32_t ledBlinkST(void *pvParameters);

//*****************************************************************************
//
// Blink the on-board LED.
//
//*****************************************************************************
int main(void)
{
    volatile unsigned long ulLoop;
	uint32_t dwCounter = 0;
	uint32_t dwTimerHandle;

    uint8_t bCounter;
    const struct STGPIOConfig*    pUserLedCfg;

    SetSystemClock();
    TTimerCfgTimeOut( 100 );
    BrdLedsInit();


    TTimerRegisterCallBack( 10 * TTIMER_1SEC_INTERVAL, TimerPeriodic,  ledBlinkST , NULL, &dwTimerHandle );
    TTimerStart( dwTimerHandle );


    xTaskCreate( 	ledBlink,
    				"Blink-Test",
					34,
					NULL,
					tskIDLE_PRIORITY + 1,
					NULL );


    vTaskStartScheduler();

    while( 1 );
}


/*****************************************************************************/
void ledBlink(void *pvParameters)
{
	uint32_t dwCount = 0;
	for( ;; )
	{
		BrdLedsSetState( USR_LED1, dwCount & 1 );
		dwCount++;

		vTaskDelay(  500 / portTICK_PERIOD_MS  );
	}
	return;
}

/*****************************************************************************/
uint32_t ledBlinkST(void *pvParameters)
{
	static uint32_t dwCount = 0;
	BrdLedsSetState( USR_LED0, dwCount & 1 );
	dwCount++;

	return 0;
}
/*****************************************************************************/



