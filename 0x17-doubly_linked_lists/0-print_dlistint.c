#include "lists.h"

/**
* print_dlistint - Prints elements of the doubly linked list
* @h: head of node
* Return: Amount of nodes
**/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
