#include <stdio.h>
#include <ctype.h>
 /**
 * function__islower - checks if a character is lowercase
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	for (c = 'a'; c <= 'z'; c++)
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
