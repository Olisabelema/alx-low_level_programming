#include "main.h"
/**
* print_last_digit - prints the last digit of an interger.
* @num:number to compute last digit.
* Return:last digit.
*/
int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
	num = num * -1;
	{
	last_digit = num % 10;
	}
	else
	{
	last_digit = num % 10;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
