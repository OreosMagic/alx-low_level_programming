#include "main.h"

/**
 * main - prints the numbers from 1 to 100, but for multiples of 3
 * print Fizz instead of the number and for multiples of 5, print Buzz.
 * For numbers which are multiples of both 3 and 5 print FizzBuzz.
 * Return: 0
 */
int main(void)
{
	int a = 1, i = 2;

	printf("%d", a);
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
		i++;
	}
	printf("\n');
	return (0);
}
