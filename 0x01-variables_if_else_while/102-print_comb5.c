#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0
 */

int main(void)
{
	int i1;
	int i2;

	for (i1 = 0; i1 <= 9; i1++)
	{
	for (i2 = i1; i2 <= 9; i2++)
	{
		putchar((i1 / 10) + '0');
		putchar((i1 % 10) + '0');
		putchar(' ');
		putchar((i2 / 10) + '0');
		putchar((i2 % 10) + '0');
		if (i1 != 9 || i2 != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
