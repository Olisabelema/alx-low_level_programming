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

	for (n = 0; n < 99; n++)
	{
		for (m = n + 1; m < 100; m++)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar(32);
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			if (n != 98 || m != 99)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
