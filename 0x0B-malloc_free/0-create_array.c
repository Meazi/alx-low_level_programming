#include <stdlib.h>
/**
 * create_array - create an array
 * @c: user input
 * @size: size of an array
 * Return: pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return ('\0');

	arr = malloc(size);

	if (arr == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
		arr[i] = c;

	arr[size] = '\0';
	return (arr);
}
