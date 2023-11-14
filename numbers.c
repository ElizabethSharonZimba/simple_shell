#include "main.h"

/**
 * _numbers - Prints numbers, used to print the error message
 * @n: number to print
 * Return: Number of characters printed
 */
int _numbers(int n)
{
	unsigned int number;
	int i = 0;

	if (n < 0)
	{
		number = -n;
		i += _putchar('-');
	}
	else
	{
		number = n;
	}
	if (number / 10 != 0)
		i += _numbers(number / 10);
	i += _putchar(number % 10 + '0');
	return (i);
}
