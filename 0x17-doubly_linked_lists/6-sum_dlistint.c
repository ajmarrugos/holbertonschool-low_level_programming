#include "lists.h"

/**
* sum_dlistint - Returns the sum of all nodes values
* @head: The head of the doubly linked list
* Return: Sum of all nodes or 0
**/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
