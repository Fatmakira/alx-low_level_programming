#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all the letters except q and e in lowercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		if (d == 'e' || d == 'q')
			d++;
		putchar(d);
		d++;
	}
	putchar('\n');

		return (0);
}
