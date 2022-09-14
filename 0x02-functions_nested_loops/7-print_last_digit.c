#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 *
 * Description: prints the last digit of a number
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int print_last_digit = n % 10;

	if (n < 0)
	{
		print_last_digit *= -1;
	}

	_putchar(print_last_digit + '0');

	return (print_last_digit);
}
