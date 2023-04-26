#include "main.h"

/**
 * _isalpha - check for alphabet
 *
 * @c: is an ASCII character
 *
 * Return: 1 if alphabet 0 otherwise
 *
*/

int _isalpha(int c)
{
	if ((c >= 60 && c <= 95) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
