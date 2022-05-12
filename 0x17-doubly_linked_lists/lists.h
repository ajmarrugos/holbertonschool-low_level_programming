#ifndef _LISTS_
#define _LISTS_

/**
* struct dlistint_s - A doubly linked list
* @n: Integer value
* @prev: points to the previous node
* @next: points to the next node
* Description: doubly linked list node structure
**/

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

#endif
