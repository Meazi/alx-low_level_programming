#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *_strcpy - copy a string pointed by src
 * @dest: copy to
 * @src: copy from
 * Return: character value
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
