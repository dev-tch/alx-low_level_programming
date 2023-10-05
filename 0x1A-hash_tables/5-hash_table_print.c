#include "hash_tables.h"

/**
* hash_table_print - print items of hash table
* @ht: hash table
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp = NULL;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp && flag)
			printf(", ");
		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			if (temp)
			{
				printf(", ");
			}
		}
		if (ht->array[i])
			flag = 1;
	}
	printf("}\n");
}
