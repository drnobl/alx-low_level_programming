#include "main.h"
/**
 * _print_rev_recursion - A function that prints a string in revers
 *
 * @s: Pointer parameter
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	_print_rev_recursion(s + 1);
	}
	else
		_putchar('\n');
}
