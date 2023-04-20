#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: Number of elements to print
 * @action: pointer to be printed
 * Return: void return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/*if (array == NULL || action == NULL) return;*/

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
