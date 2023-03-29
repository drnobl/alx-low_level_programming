#include "main.h"

/**
 * *_strncat - A function that concatenates two strings.
 * @dest: Destination parameter
 * @src: Source parameter
 * @n: Integer parameter
 *
 * Return: Returns concatenated destinatin
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, s;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	s = 0;
	while (s < n && src[s] != '\0')
	{
		dest[i] = src[s];
		s++;
		i++;
	}
	dest[i] = '\0';/*
	dest[i] = src[s];*/
	return (dest);
}
