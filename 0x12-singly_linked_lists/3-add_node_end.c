#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - function that adds node at the end of a list
 * @head: pointer to the first element of the node
 * @str: a string to be added at the end of the node
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *lastNode;

	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newNode->len = i;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (newNode);


}
