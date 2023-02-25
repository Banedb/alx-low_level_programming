#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char num, alf;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (alf = 'a'; alf <= 'f'; alf++)
		putchar(alf);
	putchar('\n');
	return (0);
}
