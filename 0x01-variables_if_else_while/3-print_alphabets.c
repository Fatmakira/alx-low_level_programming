#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then in uppercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);

}
