#include <stdio.h>
/**
 * main - prints the alphabet in reverse.
(*
 * Return: 0 on success
 */
int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
