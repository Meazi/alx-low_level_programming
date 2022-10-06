#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * array_range - create array of integers from min to max
 * @min: minimum value of the array
 * @max: maximum value of the array
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int i, n;
	int *ptr;

	if (min > max)
		return (NULL);

	n = (max - min) + 1;
	ptr = malloc(sizeof(int) * n);
	
	if (ptr == NULL)
		return ('\0');
	for (i = 0; i < n; i++)
		ptr[i] = min + i;
	return (ptr);	
}
