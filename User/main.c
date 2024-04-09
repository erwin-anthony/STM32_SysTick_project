#include "stm32f10x.h"                  // Device header
#include "bsp_led_test.h"
#include "bsp_systick.h"

int main(void){
	
	
	LED_GPIO_Config();
	

	while(1){
		LED_G_ON;
		SysTick_Delay_ms(1000);
		LED_G_OFF;
		SysTick_Delay_ms(1000);
	
	
	}


}
