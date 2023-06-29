#include "main.h"
/**
 * puts2 -  prints every other character of a string
 *@str: the str to be treated
 * Return: void 
 */
void puts2(char *str)
{
	int i; 
	int p = 0;
	while (str[p] != '\0')
	{
	p++;
	}

	for (i = 0; i < p; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
