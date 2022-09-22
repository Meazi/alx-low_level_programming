#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: parameter passed from main
 * @src: parameter passed from main
 * Return: character value
 */
char *_strcat(char *dest, char *src)
{
	int i = 1;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
