#include "lists.h"
/**
 * listint_len - A function that returns number of elements in a list
 * @h: pointer to struct
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
