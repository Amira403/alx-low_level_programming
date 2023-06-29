#include <stdio.h>
/**
 * swap_int - swaps the values of two integers.
 * @a: the the first int to be swapped.
 * @b: the second int to be swapped.
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int g = *a;
	*a = *b;
	*b = g;
}
