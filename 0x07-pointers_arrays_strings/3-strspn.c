#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: segment of a string
 * @accept: string source
 * Return: number of bytes of the segment string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
