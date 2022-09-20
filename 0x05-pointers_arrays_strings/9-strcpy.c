#include "main.h"
/**
 * *_strcpy - copy a string pointed by src
 * @dest: copy to
 * @src: copy from
 * Return: character value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
