#include "main.h"
/**
 * get_bit - return bit value of a given index
 * @n: number passed
 * @index: index of the number we want the bit value of
 *
 *Return: bit value of the number or -1 if error occurs
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_value;

	bit_value = (n >> index) & 1;

	if ((bit_value == 1) || (bit_value == 0))
		return (bit_value);
	else
		return (-1);
}
