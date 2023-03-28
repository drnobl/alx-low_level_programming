#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the code for string length
 *
 * @s: pointer paremeteir
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i;
	int c = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		c++;
	}
	return (c);
}
