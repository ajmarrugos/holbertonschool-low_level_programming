#include "lists.h"

/**
* delete_dnodeint_at_index - Delete node at given index
* @head: double pointer to head of node
* @index: index to delete
* Return: list with deleted node, 1 on success, -1 on fail
**/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int ui = 0;
dlistint_t *tmp = NULL;
if (head == NULL || *head == NULL)
return (-1);
tmp = *head;
if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(tmp);
return (1);
}
while (tmp->next != NULL)
{
if (ui == index)
{
tmp->next->prev = tmp->prev;
tmp->prev->next = tmp->next;
free(tmp);
return (1);
}
tmp = tmp->next;
ui++;
}
return (-1);
}
