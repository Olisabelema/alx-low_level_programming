#include "main.h"

/**
* print_alphabet - entry point
*
* Return: 0
*/

void print_alphabet_x10(void)
{
	char letter = 'a';

	while (letter <= 'z')
{
	_putchar(letter);
	letter++;
}
	_putchar('\n');
}
