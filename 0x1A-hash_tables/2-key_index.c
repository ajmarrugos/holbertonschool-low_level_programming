#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: is the key
 * @size: is the size of the array of the h_t
 * Return: index
**/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL)
		return (0);

	return (hash_djb2(key) % size);
}
