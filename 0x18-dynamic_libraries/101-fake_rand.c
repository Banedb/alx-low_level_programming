#include <stdio.h>
int counter = 0;
int gen[] = {9, 9, 8, 10, 24, 75};
/**
 * rand - custom rand to ensure generation of fixed values
 * later compiled into libgaga.so
 * Return: num in counter index
 */

int rand(void)
{
	return ((gen[counter++ % 6]) - 1);
}

/**
 * srand - custom function to nullify srand
 * @seed: x
 */
void srand(unsigned int seed)
{
	(void)seed;
}
