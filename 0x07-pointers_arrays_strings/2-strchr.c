#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: string address
 * @c: character passed from main
 * Return: pointer of the character in a string
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (0);
}
