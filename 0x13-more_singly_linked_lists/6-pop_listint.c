#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete the first node(head) of a list
 * @head: double pointer to a node
 * Return: data of the new head node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	ptr = *head;
	*head = ptr->next;
	free(ptr);
	return (n);
}
