#include "main.h"
#include <string.h>
/**
 * print_rev - prints a text in reverse
 * @s: string passed from main
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len, j;

	len = strlen(s);

	for (j = 0; j < len; j++)
	{
		_putchar(s[len - 1 - j]);
	}
	_putchar('\n');
}
