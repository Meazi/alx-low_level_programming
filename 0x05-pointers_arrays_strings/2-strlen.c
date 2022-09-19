#include "main.h"
/**
 * _strlen - determine the length of a string
 * @s: parameter passed from main
 *
 * Return: length of a given string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; ++count);
	return (count);
}
