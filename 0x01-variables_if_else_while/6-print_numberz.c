#include <stdio.h>
/**
 * main - program prints all single digit num of base 10 start from 0
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');

	return (0);
}
