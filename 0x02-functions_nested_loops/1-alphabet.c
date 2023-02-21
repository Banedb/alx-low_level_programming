#include <unistd.h>
/**
 * print_alphabet - prints the alphabets in lower case
 * takes no argument
 *
 * Returns no value
 */
void print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}
