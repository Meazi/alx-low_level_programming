#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - search a string for any set of bytes
 * @s: char variable
 * @accept: original string
 * Return: pointer to a string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
