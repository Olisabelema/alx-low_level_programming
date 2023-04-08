#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void write_error_check(int written_bytes,
	char *arguments[], int file_descriptor_from);
void read_error_check(int read_bytes, char *arguments[]);
void close_error_check(int file_descriptor);

/**
 * main - entry point
 * @argument_count: counts argument.
 * @arguments: this is the command line arguments.
 *
 * Return: int
*/
int main(int argument_count, char **arguments)
{
	int file_descriptor_to = 0, file_descriptor_from = 0,
	written_bytes = 0, read_bytes = 0;
	char buffer[1024];

	if (argument_count != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_descriptor_from = open(arguments[1], O_RDONLY);

	if (file_descriptor_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arguments[1]);
		exit(98);
	}

	file_descriptor_to = open(arguments[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);

	if (file_descriptor_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arguments[2]);
		exit(99);
	}
	while ((read_bytes = read(file_descriptor_from, buffer, 1024)) > 0)
	{
		written_bytes = write(file_descriptor_to, buffer, read_bytes);
		write_error_check(written_bytes, arguments, file_descriptor_from);
	}

	read_error_check(read_bytes, arguments);
	close_error_check(file_descriptor_from);
	close_error_check(file_descriptor_to);

	return (0);
}

/**
* write_error_check - this helps to check write errors.
* @written_bytes:this shows the  bytes written.
* @arguments: this is the command line arguments.
* @file_descriptor_from:this is the file descriptor for file to copy from.
* Return: this returns void.
*/
void write_error_check(int written_bytes,
	char *arguments[], int file_descriptor_from)
{
	if (written_bytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arguments[2]);
		close_error_check(file_descriptor_from);
		exit(99);
	}
}

/**
* read_error_check - helps to check read errors.
* @read_bytes: helps to read bytes.
* @arguments: shows the command line arguments
* Return: returns void.
*/
void read_error_check(int read_bytes, char *arguments[])
{
	if (read_bytes < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arguments[1]);
		exit(98);
	}
}

/**
* close_error_check - helps with the close errors checks.
* @file_descriptor: helps with file descriptor
* Return: returns void.
*/
void close_error_check(int file_descriptor)
{
	if (close(file_descriptor) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}
