#include "main.h"
/**
* print_last_digit - prints the last digit of an interger.
* @num:number to compute last digit.
* Return:last digit.
*/

int print_last_digit(int num)
{
	int last_digit = num % 10;

	_putchar('0' + last_digit);
	_putchar('\n');
	return ("last_digit");
}
