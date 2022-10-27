#include "main.h"
/**
 * clear_bit - set the value of a bit to zero
 * @n: pointer to a numbeer
 * @index: index value
 * Return: 1 if it works and -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (1);
	}
	return (1);
}
