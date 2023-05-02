/*102-free_listint_safe.c*/

#include "lists.h"

/**
 * free_listint_safe - A function that frees a linked list
 *
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t lent = 0;
	int diff; /**difference*/

	listint_t *temp;

	if (!*h || !h)
		return (0);

	while (*h != NULL)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lent++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lent++;
			break;
		}
	}
	*h = NULL;
	return (lent);
}
