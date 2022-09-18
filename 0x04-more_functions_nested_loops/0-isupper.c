#include "main.h"
/**
 * _isupper - check whether a letter is uppercase or lowercase
 * int: user input
 * @c: user input
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
