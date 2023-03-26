#include "main.h"

/**
 * _isdigit - A  function that checks for a digit (0 through 9).
 *
 * @c: Parameter variable
 * Return: Returns and integer value
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
