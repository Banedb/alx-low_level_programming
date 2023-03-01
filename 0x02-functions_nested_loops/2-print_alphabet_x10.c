#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10x
 * takes no argument
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count = 1;
	char alf;
	for(count = 1; count <= 10; count++)
	{
		for(alf = 'a'; alf <= 'z'; alf++)
			_putchar(alf);
		_putchar('\n');
	}
}
