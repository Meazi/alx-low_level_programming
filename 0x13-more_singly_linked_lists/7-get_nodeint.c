#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - a function that returns a node at a specified index
 * @head: pointer to the first node of a list
 * @index: place a specific node is located
 * Return: node at the specified index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && (count < index))
	{
		temp = temp->next;
		count++;
	}

	if (count < index)
		return (NULL);

	return (temp);
}
