#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - print all the elements of list_t
 * @h: pointer to the first element
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u]%s",h->len, h->str);
			printf("\n");
		}
		h = h->next;
		count++;


	}
	return (count);
}
