#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @max_chars: The maximum number of characters to read from the file.
* Return: The actual number of characters read and printed with (w)
* and return (0) when function is NULL or fails.
*/

ssize_t read_textfile(const char *filename, size_t max_chars)
{
	char *buffer;
	ssize_t file;
	ssize_t w;
	ssize_t r;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * max_chars);
	r = read(file, buffer, max_chars);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(file);
	return (w);
}
