#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array.
 * @a: the array to print.
 * @n: array's length
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; &a[i] != &a[n]; i++)
			if (&a[i] != (&a[n - 1]))
				printf("%d, ", a[i]);
			else
				printf("%d", a[i]);
	}
	printf("\n");
}
