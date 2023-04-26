#include "main.h"

/**
 * print_to_98 - print all natural numbers to 98
 *
 * @n: input
 *
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			_putchar(count);
	else
		for (count = n; n < 98; count++)
			_putchar(count);
	_putchar(98);
	_putchar('\n');
}
