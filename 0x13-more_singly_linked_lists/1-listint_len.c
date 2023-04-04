#include "lists.h"

/**
 * listint_len - calculate the number of elements
 * @h: Pointer to a list
 *
 * Return: an integer.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *shd;
	unsigned int count = 0;

	shd = h;
	while (shd)
	{
		count++;
		shd = shd->next;
	}
	return (count);
}
