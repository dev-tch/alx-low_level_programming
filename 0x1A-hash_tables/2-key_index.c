#include "hash_tables.h"

/**
* key_index - return index that will be used for key
* @key: key of item in hash table
* @size: capacity of hashtable
* Return: index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long i;
i = hash_djb2(key);

return (i % size);
}
