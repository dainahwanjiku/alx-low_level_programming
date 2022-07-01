#include "hash_tables.h"

/**
 * key_index - gives the index of the key 
 * @key: key to get index for
 * @size: is the size of the array of the hash table
 * 
 * Return: the index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
