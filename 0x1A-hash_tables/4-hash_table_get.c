#include "hash_tables.h"
/**
* hash_table_get - search the list of each key index to return the value
* @ht: hash table
* @key: key item in hash table
* Return: value item or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	const unsigned char *keycasted;
	hash_node_t *item = NULL;

	/*condition check */
	if (!ht || !key || key[0] == '\0')
		return (NULL);
	keycasted = (const unsigned char *)key;
	index =  key_index(keycasted, ht->size);
	item = ht->array[index];

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
