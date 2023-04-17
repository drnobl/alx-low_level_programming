#include <stdio.h>

/**
 *
 * _puts_recursion - A function that prints a string, followed by a new line.
 *
 * @S: Pointer parameter
 */

void _puts_recursion(char *s)
{
	_puts(s);
	_puts("\n");
}
