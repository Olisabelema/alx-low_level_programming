#include "main.h"

/**
* binary_to_uint - This helps to  convert a binary number to unsigned int
* @b: Binary number is contained in this string
* Return: converted number is returned here
*/

unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int decimal_val = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[n] - '0');
	}

	return (decimal_val);
}

