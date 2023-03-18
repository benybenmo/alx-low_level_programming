#include <stdio.h>
/**
 * main - program prints all possible combinations of three digits
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
