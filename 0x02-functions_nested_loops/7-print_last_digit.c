#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 *
 * @n: Value of the last digit
 *
 * Return: Value of the last digit
 */
int print_last_digit(int)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
