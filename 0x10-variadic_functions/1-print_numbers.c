#include "variadic_funtions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - A function that prints numbers, followed by a new line.
 *
 * @separator: A string to be printed between numbers
 * @n: A number of integers passed to the function
 *
 * Return:  The numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	/*char *separator = ", "*/
	int i;

	va_start(args, n);
		for (i = 0; i < n; i++)
		{
			int nums = va_arg(args, int);
	printf("%d", nums);
		}
		prinf("\n");
		va_end(args);
			return;
}
