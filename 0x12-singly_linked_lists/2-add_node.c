#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - a function that adds a node at the start of a list
 * @head: pointer to the first element of the node
 * @str: data part of the node
 * Return: pointer to the new element of the node or return NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, count = 0;

	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->next = *head;
	newNode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;

	newNode->len = count;
	*head = newNode;
	return (newNode);

}
