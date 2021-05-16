/**
 * @file main.c
 * @brief prvi kolokvijum
 * @author Vasilije Batas
 * @date 16.05.2021
 * @version v1
 */

#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>
#include <stdint.h>
#include "../pin_driver/pin.h"
#include "../timer0/timer0.h"

int main()
{
	usartInit(9600);
	int16_t prvi_element;
	int16_t razlika;
	int16_t n;

	while(1)
	{

		usartPutString("Unesi prvi clan: \r\n");
		while(!usartAvailable())
		;
		_delay_ms(100);
		usartGetString(prvi_element);

		usartPutString("Unesi razliku: \r\n");
		while(!usartAvailable())
		;
		_delay_ms(100);
		usartGetString(razlika);

		usartPutString("Unesite n-ti clan niza: \r\n");
		while(!usartAvailable())
		;
		_delay_ms(100);
		usartGetString(n);

		usartPutString("n-ti clan niza: ");
		usartPutString(Element(prvi_element, razlika, n));

	}

	return 0;
}

