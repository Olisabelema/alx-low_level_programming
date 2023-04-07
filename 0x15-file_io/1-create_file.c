#include "main.h"
#include <string.h>

/**
* create_file - Ensures a file is created.
* @filename: This directs a pointer to the name of the file to create.
* @text_content: This directs a pointer to a string to write to the file.
* Return: This returns (-1) if the function fails.
*and returns (1) if it succeeds.
*/
int create_file(const char *filename, char *text_content)
{
	int file_descriptor = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t content_length = strlen(text_content);
		ssize_t bytes_written = write(file_descriptor, text_content, content_length);

		if (bytes_written == -1 || bytes_written != content_length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
