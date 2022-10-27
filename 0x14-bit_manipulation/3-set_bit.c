#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to one
 * @n: pointer to number
 * @index: index number
 * Return: 1 if it worked and -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
		return (-1);
	bits = 1 << index;
	*n = *n | bits;
	return (1);
}
