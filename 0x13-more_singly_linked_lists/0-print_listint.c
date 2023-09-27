#include "lists.h"

/**
 * print_listint - function that prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return:The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t format = 0;

	if (h == NULL)
		return (0);
	for (format = 0; h != NULL; format++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (format);
}
