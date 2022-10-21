#include "lists.h"
/**
 * list_len - function that returns number of elements in a linked list
 * @h: head of the list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
