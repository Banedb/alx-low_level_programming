#include "main.h"

/**
 * times_table - prints 9 timestable
 * takes no argument
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (b == 0)
				_putchar('0' + c);
			else if (c >= 10)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar('0' + c);
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
