#include "function_pointers.h"
/**
 * array_iterator - print array elements
 * @action: pointer to function print_elem and print_elem_hex
 * @array: parameter passed
 * @size: size of an array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
