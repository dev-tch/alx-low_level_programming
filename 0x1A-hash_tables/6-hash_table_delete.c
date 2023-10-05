#include "hash_tables.h"
/**
* remove_node - remove item from hash table
* @item: node of hashtable array
* Return: void
*/
void remove_node(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}
/**
* hash_table_delete - clean hashtable
* @ht: hashtable
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item;
	unsigned long int i;

	for (i = 0 ; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item != NULL)
		{
			remove_node(item);
			item = item->next;
		}
	}
	free(ht->array);
	free(ht);
}
