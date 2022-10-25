#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - delets all the nodes and set head to NULL
 * @head: pointer to the first node of a list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	*head = NULL;
}
