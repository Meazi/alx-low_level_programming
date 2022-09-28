#include "main.h"
/**
 * _strlen_recursion - finds the length of a string
 * @s: string passed from main
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	static int count = 0;

	if (*s != '\0')
	{
		count++;
		_strlen_recursion(++s);
	}
	else
	{
		return (count);
	}
	return (count);
}
