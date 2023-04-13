#include <stdio.h>

#include <stdlib.h>

#include "main.h"
/**
 * _strdup - A function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: A string pointer parameter
 *
 * Return: New pointer
 *
 */
char *_strdup(char *str)
{

	char *new;

	int i, j = 0;


	if (str == NULL)

		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;


	new = malloc(sizeof(char) * (i + 1));


	if (new == NULL)

		return (NULL);

	for (j = 0; str[j]; j++)

		new[j] = str[j];

	return (new);
}
