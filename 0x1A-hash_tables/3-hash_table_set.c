#include "hash_tables.h"
void add_node_first(hash_node_t **head, hash_node_t *new_node);
hash_node_t *create_new_item(const char *key, const char *value);
/**
* hash_table_set - add key/value to hashtable
* @ht: hash_table
* @key: key for an item
* @value: value for an item
* Return: 0(failed) or  1(succeed)
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ht_item_ptr = NULL;
	const unsigned char *keycasted;
	unsigned long int index;
	hash_node_t *current_item = NULL;
	/*hash table not valid or key not empty string*/
	if (!ht || !key || key[0] == '\0')
		return (0);
	keycasted = (const unsigned char *)key;
	index = key_index(keycasted, ht->size);
	current_item = ht->array[index];
	if (current_item == NULL)
	{       ht_item_ptr = create_new_item(key, value);
		if (!ht_item_ptr)
			return (0);
		ht->array[index] = ht_item_ptr;
	}
	else
	{
		if (strcmp(current_item->key, key) == 0)
		{
			/*update key*/
			strcpy(ht->array[index]->value, value);
		}
		else
		{
			/*handle collision*/
			ht_item_ptr = create_new_item(key, value);
			if (!ht_item_ptr)
				return (0);
			add_node_first(&(ht->array[index]), ht_item_ptr);
		}
	}
	return (1);
}

/**
* add_node_first - add node to the begining of list head
* @head: linkedlist
* @new_node: new created node
* Return: void
*/
void add_node_first(hash_node_t **head, hash_node_t *new_node)
{
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
}

/**
* create_new_item - create new item of hash table
* @key: key item
* @value: value item
* Return: pointer to the new item created
*/
hash_node_t *create_new_item(const char *key, const char *value)
{
	hash_node_t *ht_item_ptr = NULL;

	ht_item_ptr = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!ht_item_ptr)
		return (NULL);
	ht_item_ptr->key = (char *) malloc(strlen(key) + 1);
	if (!ht_item_ptr->key)
	{
		free(ht_item_ptr);
		return (NULL);
	}
	ht_item_ptr->value = (char *) malloc(strlen(value) + 1);
	if (!ht_item_ptr->value)
	{
		free(ht_item_ptr->key);
		free(ht_item_ptr);
		return (NULL);
	}
	ht_item_ptr->next = NULL;
	strcpy(ht_item_ptr->key, key);
	strcpy(ht_item_ptr->value, value);
	return (ht_item_ptr);
}
