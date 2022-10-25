#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - deletes all the nodes one by one 
 * @head: pointer to the first node
 * Return : nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;
	tmp = head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
