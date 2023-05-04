/*5-flip_bits.c*/

#include "main.h"

/**
 * flip_bits - A function that counts the number of bits
 * to change to get from one number to another
 *
 * @n: first number
 *
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int crnt;
	unsigned long int exc = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		crnt = exc >> i;
		if (crnt & 1)
			counter++;
	}

	return (counter);
}
