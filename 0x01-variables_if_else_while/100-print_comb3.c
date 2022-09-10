#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/completed)
 */

int main(void)
{
	int d;

	for (d = 1; d < 90; d++)
	{
		putchar((d / 12) + '0');
		putchar((d % 10) + '0');
		if (d != 90)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
