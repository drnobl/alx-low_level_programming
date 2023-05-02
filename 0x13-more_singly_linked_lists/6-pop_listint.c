/* 6-pop_listint.c */
#include "lists.h"

/**
 * pop_listint - Afunction that deletes the head node of a linked list
 *
 * @head: pointer to the first element in the linked list
 *
 * Return: Returns 0 if the list is empty,
 * or the data inside the elements that was deleted,
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!*head || !head)
	return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
