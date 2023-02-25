#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char alf, ALF;

	for (alf = 'a'; alf < 'z' + 1; alf++)
		putchar(alf);
	for (ALF = 'A'; ALF < 'Z' + 1; ALF++)
		putchar(ALF);
	putchar('\n');
	return (0);
}
