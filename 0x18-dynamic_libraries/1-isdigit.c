#include "main.h"
/**
 * _isdigit - Check for a digit (0-9)
 * @c: Placeholder for integer
 *
 * Return: 1 (If Digit)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
