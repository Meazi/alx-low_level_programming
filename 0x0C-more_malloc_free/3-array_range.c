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
	int i, len;
	int *arr;

	if (min > max)
		return (NULL);

	for (len = 0; len < (max - min); len++)
		;

	arr = malloc(sizeof(int) * (len + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		arr[i] = min++;
	}
	return (arr);
	
}
