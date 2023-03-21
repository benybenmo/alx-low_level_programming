#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @i: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	return (k);
}
