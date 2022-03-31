#ifndef _LISTS_
#define _LISTS_

/*  STD LIBRARIES */
#include <stdio.h>
#include <stdlib.h>

/**
* listint_s - Singly linked list
* @n: Integer argument
* @next: Points to the next node
* Description: Singly linked list node structure
**/

typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

/* PROTOTYPES */

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
