#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet(void)
{
	for (int x = 0 ; x < 10 ; x++)
	{
	for (int c = 97 ; c < 123 ; c++)
	{
	putchar(c);
	}
	putchar('\n');
}
}
