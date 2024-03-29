#include "main.h"

/**
 * flip_bits - number of bits to flip to get to another number
 * @n: parameter
 * @m: destination
 *
 * Return: bitc (count of bits)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, bitc = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			bitc += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (bitc);
}
