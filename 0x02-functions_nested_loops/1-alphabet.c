#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet(void)
{
	int x, c;
	for (x = 0 ; x < 10 ; x++)
	{
	for (c = 97 ; c < 123 ; c++)
	{
	putchar(c);
	}
	putchar('\n');
}
}
