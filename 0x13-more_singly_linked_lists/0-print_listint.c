#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - A function that prints all the elements of a list
 * @h: pointer to the struct
 * Return: number of elements of the list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
