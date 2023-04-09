#include "main.h"

/**
* binary_to_uint - This helps to  convert a binary number to unsigned int
* @b: Binary number is contained in this string
* Return: converted number is returned here
*/

unsigned int binary_to_uint(const char *b)
{
	if (!b)
	{
		return (0);
	}

	unsigned int decimal_val = 0;
	const char *p = b;

	while (*p)
	{
		if (*p != '0' && *p != '1')
		{
			return (0);
		}
		decimal_val = (decimal_val << 1) + (*p++ - '0');
	}

	return (decimal_val);
}
