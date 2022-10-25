#include "lists.h"
/**
 * sum_listint - sum all the data of the nodes
 * @head: pointer to the first node of the list
 * Return: sum of the numbers of the nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
