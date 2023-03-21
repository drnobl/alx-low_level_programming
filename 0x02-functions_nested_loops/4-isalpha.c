#include "main.h"

/**
 * _isalpha -  A function that checks for alphabetic character
 *@c: A parameter to print alphabetic characters
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	_putchar(c);
	return (1);
	else
	return (0);
}
