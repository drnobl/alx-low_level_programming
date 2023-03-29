#include "main.h"

/**
 * *_strncpy -  The function that copies a string
 *
 * @dest: Destination parameter
 * @src: Source parameter
 * @n:  Integer parameter
 *Return: Returns the copied character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d, i, s;

	d = 0;
	while (dest[d] != '\0')
	{
		i++;
		d++;
	}
	s = 0;
	while  (src[s] != '\0')
	{
		s++;
		i++;
	}
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
