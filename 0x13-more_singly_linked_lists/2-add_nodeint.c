#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - A funcion that adds new node at the beginning of a list
 * @head: pointer to the head
 * @n: data part of the struct/node
 * Return: address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->next = *head;
	newNode->n = n;
	*head = newNode;
	if (newNode == NULL)
		return (NULL);

	return (newNode);
}
