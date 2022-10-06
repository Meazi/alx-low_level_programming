#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - memory allocation using malloc
 * @b: memory size
 * Return: pointer to new memory area
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
