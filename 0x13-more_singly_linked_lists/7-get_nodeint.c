#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - a function that returns a node at a specified index
 * @head: pointer to the first node of a list
 * Return: node at the specified index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		else
		{
			count++;
			head = head->next;
		}
	}
	return (head);
}
