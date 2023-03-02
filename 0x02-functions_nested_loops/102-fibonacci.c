#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count = 1;
	long n1 = 0, n2 = 1, n3 = 1;

	while (count <= 50)
	{
		if (count == 50)
			printf("%ld\n", n3);
		else
			printf("%ld, ", n3);
		n1 = n2;
		n2 = n3;
		n3 = n1 + n2;
		count++;
	}
	return (0);
}
