#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * size: the size of the array.
 * Failure of the code - function should return NULL.
 * 
 * Return: pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	// creates a new hashtable
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL){
		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if(hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (i = 0; i < hash_table->size; i++)
		hash_table->array[i] = NULL;
	return hashtable;
}
