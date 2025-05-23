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
	dlistint_t *current, *next, *node;
	unsigned int i;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	current = *h;
	for (i = 0; current && i < (idx - 1); i++)
		current = current->next;
	if (i != (idx - 1))
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	next = current->next;
	current->next = node;
	node->prev = current;
	node->next = next;
	if (next)
		next->prev = node;
	return (node);
}
