#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to linkedlist
 * @index: index
 *
 * Return: 1 on success -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; current && i < index; i++)
		current = current->next;
	if (current && i == index)
	{
		current->prev->next = current->next;
		if (current->next)
			current->next->prev = current->prev;
		free(current);
		return (1);
	}
	return (-1);
}
