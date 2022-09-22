#include "main.h"
/**
 * _strncpy - copies one string onto another
 * @dest: destination
 * @src: source
 * @n: max input passed from main
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
