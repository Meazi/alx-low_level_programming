#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: parameter passed from main
 * @b: parameter passed from main
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
