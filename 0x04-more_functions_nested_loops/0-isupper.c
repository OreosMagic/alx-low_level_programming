#include <stdio.h>
#include <ctype>
#include "main.h"
/**
 * _isupper - function that checks if c is uppercase
 * @c: char to check
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
