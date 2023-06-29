#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: the str to be modified
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char m;

	while (s[index++])
	len++;

	for (index = len - 1; index >= len / 2; index--)
	{
	m = s[index];
	s[index] = s[len - index - 1];
	s[len - index - 1] = m;
	}
}
