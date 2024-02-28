/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f4xx_hal_conf.h"
#include "hwConfig.h"
#include "regs.h"
#include "usb_device.h"
#include "usbd_cdc_if.h"
#include "math.h"

/* Private variables ---------------------------------------------------------*/
uint16_t FirmWareVersion = 1;
uint8_t txBuf[2048];			//to receive data over usb_user
uint8_t rxBuf[2048];			//to receive data over usb_user
uint32_t rxLen = 0;				//to receive data over usb_user
uint32_t lastBlink;				//for blinking hearbeat LED

/* Private function prototypes -----------------------------------------------*/
static void BlinkGreenLed(void);

/* Private user code ---------------------------------------------------------*/

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
	HAL_Init();
	SystemClock_Config();
	MX_GPIO_Init();
	MX_NVIC_Init();
	//MX_SPI2_Init();
	//MX_ADC1_Init();
	
	
	
	
	
	MX_USB_DEVICE_Init();
	InitRegs();
    //Load_Params(0); //this causes a HardFault, probably because reading beyond flash

	while (1)
	{
		BlinkGreenLed();
		if (rxLen > 0) {
			Parse();
		}
	}
}

void BlinkGreenLed()
{
	//period is blinkTime + blinkOnTime = 889*(1+1/8) = 1000
	static uint32_t blinkTime = 889; //off time
	static uint8_t bBlinkOn = 1;
	uint32_t blinkOnTime = blinkTime >> 3; //on time
	uint32_t sysTick = HAL_GetTick();
  
	if ((sysTick - lastBlink) > blinkOnTime) {
		if (bBlinkOn) {
			// LED off
			HAL_GPIO_WritePin(GPIOG, Pin_LedGreen, GPIO_PIN_RESET);
			bBlinkOn = 0;
			lastBlink = sysTick;
		}
		else if ((sysTick - lastBlink) > blinkTime) {
			// LED on
			HAL_GPIO_WritePin(GPIOG, Pin_LedGreen, GPIO_PIN_SET);
			bBlinkOn = 1;
			lastBlink = sysTick;
		}
	}
}

/*----------------------------------------Start new project content here----------------------------------------*/

