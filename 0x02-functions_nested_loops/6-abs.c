#include "main.h"
#include <stdio.h>

/**
 * _abs - finds the absolute value of a number
 *
 *@n: user input
 *
 * Return: always 0
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else if (n < 0)
		return (n * -1);
	return (0);
}
