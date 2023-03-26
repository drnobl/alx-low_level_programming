#include "main.h"

/**
 * print_line - Afunction that draws a straight line on the terminal
 * @n: number of times the character _ should be printed
 * Return: int value
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
