#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char alf;

	for (alf = 'a'; alf < 'z' + 1; alf++)
		if (alf != 'e' && alf != 'q')
			putchar(alf);
	putchar('\n');
	return (0);
}
