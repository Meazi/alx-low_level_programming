#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination area
 * @src: source
 * @n: elements of a memory
 * Return: a pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
