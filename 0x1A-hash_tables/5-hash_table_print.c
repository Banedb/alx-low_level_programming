#include "hash_tables.h"

/**
 * hash_table_print - prints hash_table
 * @ht: the hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int flag = 1;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			printf("%s'%s': '%s'", flag ? "" : ", ",
				temp->key, temp->value);
			temp = temp->next;
			flag = 0;
		}
	}
	printf("}\n");
}
