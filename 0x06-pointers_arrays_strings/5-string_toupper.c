#include "main.h"

/**
 * *string_toupper - A function that changes
 * all lowercase letters of a string to uppercase.
 *
 * @a: All characters to uppercase
 *
 * Return:  Return a character a
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		/* I used the ASCII value but normal 'a' and 'z' can also be used */
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
	}
	return (a);
}
