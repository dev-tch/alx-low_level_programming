#include "hash_tables.h"
/**
* hash_table_create - create hash table
* @size: size of hash table
* Return: pointer to new created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	/* create new hash table*/
	hash_table_t *ht_ptr  = NULL;
	unsigned long i;

	ht_ptr = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (!ht_ptr)
		return (NULL);
	ht_ptr->size = size;
	ht_ptr->array = (hash_node_t **) calloc(ht_ptr->size, sizeof(hash_node_t *));
	if (!ht_ptr->array)
		return (NULL);

	for (i = 0; i < ht_ptr->size; i++)
		ht_ptr->array[i] = NULL;

	return (ht_ptr);
}

