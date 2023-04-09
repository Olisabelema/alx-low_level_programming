#include "main.h"

/**
* clear_bit - used to reset or clear a particular bit within a
*	variable or data structure, setting the value to 0
* @n: The number to changed pointer
* @index: Bit to clear index.
* Return: Returns (1) if it's successful, otherwise (-1) if it's unsuccessful.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
