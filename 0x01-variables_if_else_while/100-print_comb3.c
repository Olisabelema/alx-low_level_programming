#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	n = 48;

	while (n < 57)
	{
	m = 48;
	while (m < 58)
	{
		putchar(n);
		putchar(m);
		m++;

		putchar(44);
		putchar(32);
	}
	n++;
	}
	putchar('\n');

	return (0);
	}
