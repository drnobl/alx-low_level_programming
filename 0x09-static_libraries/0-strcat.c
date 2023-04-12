#include "main.h"
#include <stdio.h>

/**
 * *_strcat - A function that concatenates two strings
 *
 * @dest: Destination to concatenate
 * @src: Source to concatnate from
 *
 * Return: Returns the concatenated destination
 */
char *_strcat(char *dest, char *src)
{
	int d, s;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		s++;
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
