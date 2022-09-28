#include "main.h"
/**
 * _strlen_recursion - finds the length of a string
 * @s: string passed from main
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if ('\0' != *s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
