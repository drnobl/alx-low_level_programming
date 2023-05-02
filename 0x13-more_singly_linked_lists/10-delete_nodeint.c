/*<10-delete_nodeint.c>*/
#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes a node in a linked
 * list at a certain index
 *
 * @head: pointer to the first element in the list
 *
 * @index: index of the node to delete
 *
 * Return: Returns -1 if fail or 1 if if Success.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int idx = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (idx < index - 1)
	{
		if (!(temp->next) || (!temp))

			return (-1);
		temp = temp->next;
		idx++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);
	return (1);
}
