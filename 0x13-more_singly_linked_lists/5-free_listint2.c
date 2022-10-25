#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - delets all the nodes and set head to NULL
 * @head: pointer to the first node of a list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
