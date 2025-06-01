#include "sys.h"
#include "delay.h"
#include "led.h"
#include "lcd1602.h"


/*
 *			RS------------>PA5
 *			RW------------>GND
 *			E ------------>PA4
 *			D4------------>PA3
 *			D5------------>PA2
 *			D6------------>PA1
 *			D7------------>PA0
*/






 int main(void)
 {	
	delay_init();	    //��ʱ������ʼ��	
	lcd1602_init();	 
	LED_Init();		  	//��ʼ����LED���ӵ�Ӳ���ӿ�
	while(1)
	{
		LED0=0;
		delay_ms(300);	 //��ʱ300ms
		LED0=1;
		delay_ms(300);	//��ʱ300ms
		lcd1602_show_string(0, 0, (unsigned char*)"ERR");
		
	}
}

