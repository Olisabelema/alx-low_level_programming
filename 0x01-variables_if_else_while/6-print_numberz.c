#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0;

	while (n <= 9)
	{
		putchar(48 + n);
		n++;
	}
	putchar('\n');

	return (0);
}
