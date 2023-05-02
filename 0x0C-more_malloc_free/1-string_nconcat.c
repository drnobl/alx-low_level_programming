/*1-string_nconcat.c*/
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 *
 * @s1: string to append to
 *
 * @s2: string to concatenate from
 *
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, lent1 = 0, lent2 = 0, j = 0;

	while (s1 && s1[lent1])
		lent1++;
	while (s2 && s2[lent2])
		len2t++;

	if (n < lent2)
		s = malloc(sizeof(char) * (lent1 + n + 1));
	else
		s = malloc(sizeof(char) * (lent1 + lent2 + 1));

	if (!s)
		return (NULL);

	while (i < lent1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < lent2 && i < (lent1 + n))
		s[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
