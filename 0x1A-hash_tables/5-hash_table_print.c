#include "hash_tables.h"

/**
* hash_table_print - Function that prints a hash table
* @ht: The hash table
* Return: A dictionary format of the hash table
**/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int x;
	char *flag;

	if (ht == NULL)
		return;
	printf("{");
	flag = "";

	for (x = 0; x < ht->size; x++)
	{
		tmp = ht->array[x];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", flag, tmp->key, tmp->value);
			flag = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
