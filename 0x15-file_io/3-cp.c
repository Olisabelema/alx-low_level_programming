#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *filename);
void close_file(int file_descriptor);
/**
* create_buffer - allocates 1024 bytes of memory for a buffer.
* @filename: The name of the file that the buffer will store characters into.
* Return: This points to the newly-allocated buffer.
*/
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - closes a file.
 * @file_descriptor: The file descriptor of the file to be closed.
*/
void close_file(int file_descriptor)
{
	int result;

	result = close(file_descriptor);

	if (result == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't close file descriptor %d\n", file_descriptor);
		exit(100);
	}
}

/**
* main - copies the contents of one file into another file.
* @argc: This shows the no. of arguments supplied to the program.
* @argv: This shows array of pointers to the arguments.
* Return: (0) when its successful.
* Description: Exit with code 97, if the argument count is incorrect.
*	Exit with code 98, if the source file cannot be read or does not exist.
*	Exit with code 99, if the destination file cannot be written to or created.
*	Exit with code 100, if either file cannot be closed.
*/
int main(int argc, char *argv[])
{
	int source_file, destination_file, read_result, write_result;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp source_file destination_file\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	source_file = open(argv[1], O_RDONLY);
	read_result = read(source_file, buffer, 1024);
	destination_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source_file == -1 || read_result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		write_result = write(destination_file, buffer, read_result);

		if (destination_file == -1 || write_result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		read_result = read(source_file, buffer, 1024);
		destination_file = open(argv[2], O_WRONLY | O_APPEND);
	}
		while (read_result > 0);

		free(buffer);
		close_file(source_file);
		close_file(destination_file);

		return (0);
}
