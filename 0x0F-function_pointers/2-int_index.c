#include "function_pointers.h"
/**
 * int_index - function that searches for an integr
 * @array: parameter passed
 * @size: size of the array
 * @cmp: pointer to is_98, is_strictly_positive and abs_is functions
 * Return: index of the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
