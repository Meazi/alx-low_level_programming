#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - Entry point
 * @i: user input
 * int: user input
 * Return: Always 0
 */

int positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	} else if (i < 0)
	{
		printf("%d is negative\n", i);
	} else
		printf("%d is Zero\n", i);
	return (0);
}
