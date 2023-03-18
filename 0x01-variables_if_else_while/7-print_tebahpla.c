#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for alphabets from z-a
 *
 * Return: Returns 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
