#include "main.h"

/**
* set_bit - sets a particular bit in a binary number to the value of 1.
* @n: The number to change pointer
* @index: The bit to set to 1 index.
* Return: Returns (1) when successful, and (-1) when unsuccessful
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
