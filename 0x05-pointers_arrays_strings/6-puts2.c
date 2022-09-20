#include "main.h"
#include <string.h>
/**
 * puts2 - print every character in a new line
 * @str: parameter passed from main
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
