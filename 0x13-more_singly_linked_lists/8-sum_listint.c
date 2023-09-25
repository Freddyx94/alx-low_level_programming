#include "lists.h"

/**
 * sum_listint - specify the sum of all the data in a linked list
 * @head: first node in the linked list
 *
 * Return: resulting sum, returns 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
