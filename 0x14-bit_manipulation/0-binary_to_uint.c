#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function that changes binary to unsigned int
 * @b: pointer to binary numbers
 * Return: base 10 number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_val = 0;
	int base = 1, i = 0;

	if (b == NULL)
		return (0);
	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (i >= 0)
	{
		decimal_val += ((b[i] - '0') * base);
		base *= 2;
		i--;
	}
	return (decimal_val);
}
