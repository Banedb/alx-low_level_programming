#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - does what its name says
 * @h: pointer to head
 * @idx: index to insert
 * @n: value of node
 *
 * Return: new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *prev, *new;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	for (i = 0; current && i < idx; i++)
	{
		current = current->next;
	}
	if (i != idx)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	prev = current->prev;
	new->prev = prev;
	new->next = current;
	if (idx == 0)
	{
		current->prev = new;
		*h = new;
	}
	else
		prev->next = new;
	if (current)
		current->prev = new;
	return (new);
}
