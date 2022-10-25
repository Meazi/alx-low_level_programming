#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - a function that adds a node at the end of a list
 * @head: pointer to the new head of the list
 * @n: data part of the node
 * Return: address of the newly added element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;

	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	newNode->n = n;
	newNode->next = NULL;
	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = newNode;
	return (newNode);
}
