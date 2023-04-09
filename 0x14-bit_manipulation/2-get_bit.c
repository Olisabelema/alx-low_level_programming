#include "main.h"

/**
* get_bit - Allows for retrieval of the value of a specific bit
*	from a binary representation of a number
* @n:integer number to search
* @index: This is the bit index
* Return: This returns bit value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
