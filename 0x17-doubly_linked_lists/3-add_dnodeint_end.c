#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end
 * @head: struct
 * @n: const int
 *
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list = malloc(sizeof(dlistint_t)), *end = *head;

	if (list == NULL)
		return (NULL);
	list->n = n;
	list->next = NULL;

	if (*head == NULL)
	{
		list->prev = NULL;
		*head = list;
		return (*head);
	}

	while (end->next != NULL)
		end = end->next;
	list->prev = end;
	end->next = list;

	return (list);
}
