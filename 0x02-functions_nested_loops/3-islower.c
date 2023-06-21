#include <stdio.h>
#include <ctype.h>
 /**
 *_islower -checks if a character is lowercase
 *@c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
	return (1);
	}
	else
	{
	return (0);
}
}
