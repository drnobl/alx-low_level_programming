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
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	i++;
	}
	return (dest);
}
