#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - delets all the nodes and set head to NULL
 * @head: pointer to the first node of a list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *ptr = NULL;

	tmp = *head;

	while (tmp)
	{
		tmp = tmp->next;
		free(tmp);
		tmp = ptr;
	}
	*head = NULL;
}
