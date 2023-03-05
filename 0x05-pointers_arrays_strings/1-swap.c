#include "main.h"

/**
 * swap_int - swap the value of two integers.
 * @a: first integer.
 * @b: second integer.
 */

void swap_int(int *a, int *b)
{
	int a2 = *a, b2 = *b;
	*a = b2;
	*b = a2;
}
