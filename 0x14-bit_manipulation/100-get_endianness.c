#include "main.h"

/**
* get_endianness - refers to the byte ordering used to represent
*	data in computer memory either little or big endian
* Return: This returns (1) for little endian and (0) for big endian
*/
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
