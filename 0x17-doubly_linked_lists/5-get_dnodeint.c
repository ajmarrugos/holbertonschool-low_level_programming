#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node from a doubly linked list
 * @head: pointer to head of the list
 * @index: index of the node to search for, starting from 0
 * Return: address of the node, or if it does not exist, NULL
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int size;
dlistint_t *tmp;
size = 0;
if (head == NULL)
return (NULL);
tmp = head;
while (tmp)
{
if (index == size)
return (tmp);
size++;
tmp = tmp->next;
}
return (NULL);
}
