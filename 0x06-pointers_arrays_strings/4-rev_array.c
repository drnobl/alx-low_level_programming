#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array of integers
 *
 * @a: A pointer parameter
 * @n: An integer parameter
 *
 */

void reverse_array(int *a, int n)
{
	int r;
	int i;

	for (r = 0; r < n; r++)
	{
		n--;

		i = a[r];
		a[r] = a[n];
		a[n] = i;
	}
}
