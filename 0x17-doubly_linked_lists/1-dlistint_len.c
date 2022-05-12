#include "lists.h"

/**
* dlistint_len - Counts the amount of elements in a doubly linked list
* @h: The double linked list to count
* Return: Number of elements in the doubly linked list
**/

size_t dlistint_len(const dlistint_t *h)
{
int len = 0;
while (h != NULL)
{
++len;
h = h->next;
}
return (len);
}
