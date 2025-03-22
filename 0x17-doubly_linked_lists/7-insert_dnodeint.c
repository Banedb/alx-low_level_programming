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
	dlistint_t *current = *h, *next, *new;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	for (i = 0; current && i < (idx - 1); i++)
		current = current->next;
	if (i != (idx - 1))
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	next = current->next;
	current->next = new;
	new->prev = current;
	new->next = next;
	if (next)
		next->prev = new;
	return (new);
}
