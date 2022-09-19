#include "main.h"
/**
 * _puts - prints a string on stdout
 * @str: value passed from the main function
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
