#include "main.h"
#include <stdio.h>

/**
 * _abs - finds the absolute value of a number
 *
 *@int: user input
 *
 * Return: always 0
 */
int _abs(int n)
{
	return (n * ((2 * n + 1) % 2));
}
