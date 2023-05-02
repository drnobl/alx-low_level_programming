#include "lists.h"

/**
 * listint_len - A function that returns the number of
 * elements in a linked lists
 *
 * @h: parameter linked list of type listint_t to traverse
 *
 * Return: number of nodes(size_t)
 */

size_t listint_len(const listint_t *h)
{
	size_t lent = 0;

	while (h != NULL)
	{
		lent++;
		h = h->next;
	}
	return (lent);
}

