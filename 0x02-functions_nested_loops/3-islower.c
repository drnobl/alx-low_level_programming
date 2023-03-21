#include "main.h"

/**
 * _islower - check the code.
 *function that checks for lowercase character.
 * @c: Parameter - c prints the lower case
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar(c);
		return (1);
	}
	else
	{
		return (0);
	}
}
