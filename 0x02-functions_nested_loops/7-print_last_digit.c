#include "main.h"
#include <limits.h>
/**
* print_last_digit - prints the last digit of an interger.
* @num:number to compute last digit.
* Return:last digit.
*/
int print_last_digit(int num)
{
	int last_digit;

	if (num == INT_MIN)
	{
	last_digit = 8;
	}
	else if (num > 0)
	{
	last_digit = num % 10;
	}
	else
	{
	num = num * -1;
	last_digit = num % 10;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
