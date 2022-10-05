#include <stdlib.h>
/**
 * str_concat - mergs two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to new memory area
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	char *alloc_mem;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1_length) != '\0')
		s1_length++;

	while (*(s2 + s2_length) != '\0')
		s2_length++;

	alloc_mem = malloc(1 + (s1_length * sizeof(*s1)) + (s2_length * sizeof(*s2)));
	if (alloc_mem == NULL)
		return ('\0');

	for (i = 0; i < s1_length; i++)
		alloc_mem[i] = *(s1 + i);

	for (j = 0; j < s2_length; j++, i++)
		alloc_mem[i] = *(s2 + j);
	return (alloc_mem);
}
