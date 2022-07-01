#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with key
 * @ht: the hash table to look into
 * @key: the key you are looking for
 *
 * Return: value or null if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || 
	    key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	//ensure that we move to a non null array
	if (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}
	return (NULL);
}
