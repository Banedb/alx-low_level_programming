#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n1 = 0, n2 = 1, n3 = 1, sum = 0;

	while (n3 <= 4000000)
	{
		if (n3 % 2 == 0)
			sum = sum + n3;
		n1 = n2;
		n2 = n3;
		n3 = n1 + n2;
	}
	printf("%d\n", sum);
	return (0);
}
