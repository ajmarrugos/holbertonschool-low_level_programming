#ifndef _LISTS_
#define _LISTS_

/*  STD LIBRARIES */
#include <stdio.h>
#include <stdlib.h>

/**
* struct list_s - Singly linked list
* @str: String - (malloc'ed string)
* @len: Length of the string
* @next: Points to the next node
* Description: Singly linked list node structure
**/

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/* PROTOTYPES */
size_t print_list(const list_t *h);

#endif
