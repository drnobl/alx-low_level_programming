/*101-mul.c*/
#include "main.h"
/*#ifndef ERR_MSG "Error"*/
#define ERR_MSG "Error"

/**
 * is_digit - a function to check if a string contains
 * a non-digit char
 *
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 *
 * @argc: number of arguments
 *
 * @argv: array of arguments
 *
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int i, len, lent, lent2, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();

	lent = _strlen(s1);
	lent2 = _strlen(s2);
	len = lent + lent2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);

	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;

	for (lent = lent - 1; lent >= 0; lent--)
	{
		digit1 = s1[lent] - '0';
		carry = 0;
		for (lent = _strlen(s2) - 1; lent2 >= 0; lent2--)
		{
			digit2 = s2[lent2] - '0';
			carry += result[lent + lent2 + 1] + (digit1 * digit2);
			result[lent + lent2 + 1] = carry % 10;
			carry /= 10;
		}

		if (carry > 0)
			result[lent + lent2 + 1] += carry;
	}

	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);

	return (0);
}
