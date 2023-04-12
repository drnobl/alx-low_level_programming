#include "main.h"

/**
 * _strcmp -  It  compares two strings
 *
 * @s1: First parameter to compare with s2
 * @s2: Second parameter to compare with s1
 *
 * Return: Returns an integer value
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
