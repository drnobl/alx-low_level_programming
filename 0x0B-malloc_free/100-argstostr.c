/* 100-argstostr.c*/
#include "main.h"

/**
* *argstostr - function to concatenate all the arguments of the program
*
* @ac: number of arguments
*
* @av: array of arguments
*
* Return: Pointer to the new string (Success), NULL (Error)
*/

char *argstostr(int ac, char **av)
{
	int i, k, j, len;
	char *str;

	if (av == NULL || ac == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
