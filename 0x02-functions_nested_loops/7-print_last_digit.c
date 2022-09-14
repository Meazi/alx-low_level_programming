#include "main.h"

/**
 * print_last_digit - finds the last digit of a number
 * @n: user input
 *
 * Return: always 0
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
	{
		m = (m * -1);
	}
	_putchar('0' + m);
	return (m);
	_putchar('\n');
}
