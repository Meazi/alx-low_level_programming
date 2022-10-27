#include "main.h"
/**
 * flip_bits - reeturn number of bits we need to flip to
 * get from one number to another
 * @n: starting number
 * @m: target number
 * Return: number of bis flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int xor;

	xor = n ^ m;
	while (xor)
	{
		bits += xor & 1;
		xor >>= 1;
	}
	return (bits);
}
