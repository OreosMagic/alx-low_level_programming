#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @n: integer whose last digit we want to find
 *
 * Return: int
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
