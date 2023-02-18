#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char c;

	n = 0;
	c = 'a';

	while (n <= 9)
	{
		putchar(48 + n);
		n++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
