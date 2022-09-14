#include "main.h"
/**
 * _islower - check whether a character is lowercase or uppercale
 *
 * @c: user input
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122 )
		return (1);
	else
		return (0);

}
