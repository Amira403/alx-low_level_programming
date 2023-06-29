#include <stdio.h>
#include "main.h"
/**
 * main - how to change the value of a variable from outside the function
 * it is declared in, using a pointer.
 * @*n:pointer 
 * @p:int
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int p;
	p = 402;
	n = &p;
	*n = 98;

	putchar( p + '0');
	return (0);
}
