#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
