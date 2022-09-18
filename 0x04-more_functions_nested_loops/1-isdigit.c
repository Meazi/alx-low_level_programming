#include "main.h"
/**
 * _isdigit - a function checks a character is a digit
 * @c: user input
 * Return: always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
