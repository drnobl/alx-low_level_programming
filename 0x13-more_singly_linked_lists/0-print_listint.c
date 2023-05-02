/*<0-print_listint>*/
#include "lists.h"
/**
 * print_listint - A function that prints all the elements of a linked list
 *
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int elm = 0;

	while (h)
	{
		printf("%d\n", h->n);
		
		h = h->next;
		elm++;
	}
	return (elm);
}
