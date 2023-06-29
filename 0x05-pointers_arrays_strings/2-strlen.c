#include <stdio.h>
/**
 *_strlen - returns the length of a string.
 *@str: the str to get the lengh of
 * Return: the length of @str.
 */
size_t _strlen( const char *str)
{
	siz_t length = 0;

	while (*str++)
	length++;
	return (length);
}
