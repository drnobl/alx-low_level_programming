#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints upto 98
 *@n: Parmeter value
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int w, q;

	if (n <= 98)
	{
		for (w = n; w <= 98; w++)
		{
			if (w != 98)
				printf("%d, ", w);
			else if (w == 98)
				printf("%d\n", w);
		}
	} else if (n >= 98)
	{
		for (q = n; q >= 98; q--)
		{
			if (q != 98)
				printf("%d, ", q);
			else if (q == 98)
				printf("%d\n", q);
		}
	}
}

