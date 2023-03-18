#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point  for 2 number combination
 *
 * Return: Always 0 on Success
 */

int main(void)
{
	int f;
	int s;

	for (f = 0; f < 10; f++)
	{
		for (s = 1; s < 10; s++)
		{
			if (f < s && f != s)
			{
				putchar(f + '0');
				putchar(s + '0');
				if (f + s != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
