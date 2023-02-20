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
	int o;

	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			for (o = m + 1; o < 10; o++)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(o + '0');
				if (n != 7 || m != 8 || o != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
