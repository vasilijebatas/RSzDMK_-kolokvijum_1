/**
 * @file arrays.c
 * @brief prvi kolokvijum
 * @author Vasilije Batas
 * @date 16.05.2021
 * @version v1
 */
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include "arrays.h"

/**
 * Element - funkcija koja racuna n-ti element niza
 */

int16_t Element(int16_t first_element, int16_t difference, int16_t n)
{

	int16_t broj;

	broj = first_element + (n - 1) * difference;

	return broj;
}

/**
 * Sum - funkcija koja racuna sumu n elemenata niza
 */

void Sum(int16_t first_element, int16_t difference, int16_t n, int8_t mode)
{

}
