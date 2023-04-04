#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of a singly linked list
 * @h: pointer to the list
 *
 * Return: an integer
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int count = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		count++;
		tp = tp->next;
	}
	return (count);
}
