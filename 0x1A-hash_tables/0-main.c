#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include "hash_tables.h"



/**
 *
 * main - check my code
 *
 * Return: Always EXIT_SUCCESS.
 */

#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);
	return (EXIT_SUCCESS);
}
