#include "main.h"
/**
 * _puts - prints a string
 * @str: the str to print
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0';str++)
	{  
	_putchar(*str);
	}
	_putchar('\n');
}
