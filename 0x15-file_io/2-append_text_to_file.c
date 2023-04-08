#include "main.h"

/**
* append_text_to_file - At the end of a file, it appends text.
* @filename_ptr: This allows for a pointer to point to the name of the file.
* @text_ptr: This allows for a string to be added to the end of the file.
* Return: returns(-1) if the function fails or filename_ptr is NULL.
*         returns(-1) when the user lacks permission & no file exist.
*         returns(1) if it's successful.
*/
int add_text_to_file(const char *filename_ptr, char *text_ptr)
{
	int file_descriptor, write_count, length = 0;

	if (filename_ptr == NULL)
	return (-1);

	if (text_ptr != NULL)
	{
	for (length = 0; text_ptr[length];)
		length++;
	}

	file_descriptor = open(filename_ptr, O_WRONLY | O_APPEND);
	write_count = write(file_descriptor, text_ptr, length);

	if (file_descriptor == -1 || write_count == -1)
	return (-1);

	close(file_descriptor);

	return (1);
}
