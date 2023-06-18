#include <stdio.h>
/**
 * main - This is a description
 * Return: 0
 */
int main(void)
{
	int d1, d2;
	for (d1 = 73; d1 <= 98; d1++)
	{
	for (d2 = d1 + 1; d2 <= 99; d2++)
	{
	putchar(d1 / 10 + '0');
	putchar(d1 % 10 + '0');
	putchar(' ');
	putchar(d2 / 10 + '0');
	putchar(d2 % 10 + '0');
	if (!(d1 == 98 && d2 == 99))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return 0;
}
