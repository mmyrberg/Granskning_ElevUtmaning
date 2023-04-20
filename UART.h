// Denna fil knyter samman UART.c och Main.c 
ifndef  __UART_H 
#define  __UART_H


#include "stm32f4xx.h" // Hämtar källkoden och hänvisningar för arbete på STM-hårdvara. 
#include <stdio.h> //  Inkluderar standard I/O för C

void USART2_Init(void); // Kallar på och refererar till deklarationen 
void test_setup(void); // 


#endif // förtydligar avslutningen av vår headerfil
