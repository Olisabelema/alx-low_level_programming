#include "main.h"

/**
* int _islower(int c) - entry point
* @c: checks for lowercase character
* Return: 0
*/

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	{
	putchar(49);
	}
	else
	{
		putchar(48);
	}
	_putchar('\n');
}
