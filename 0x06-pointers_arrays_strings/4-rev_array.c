#include "main.h"
/**
 * reverse_array - reverse array
 * @a: parameter passed from main
 * @n: parameter passed from main
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
