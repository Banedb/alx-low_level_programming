#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char alf;

	for (alf = 'z'; alf > 'a' - 1; alf--)
		putchar(alf);
	putchar('\n');
	return (0);
}
