#include <stdio.h>
/**
 * main - function that takes a pointer to an int as paramet * er and upd * ates the value it points to to 98
 * @*n:pointer 
 * @p:int
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	*n = 98;
	int p = 42;
	int *n = &p;

	updateto98(n);
	putchar('9');
	putchar('8');
	return (0);
}
