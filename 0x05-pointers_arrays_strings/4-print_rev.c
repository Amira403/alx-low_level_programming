#include "main.h"
#include <stdio.h>
/**
 * print_rev - print a str in reverse
 * @s: the str to print 
 * Return: void
 */
void rev_string(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
	-putchar(s[c]);
	}
	_putchar('\n');
}
