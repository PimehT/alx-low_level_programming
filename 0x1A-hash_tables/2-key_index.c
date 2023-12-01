#include "hash_tables.h"

/**
 * key_index - gives back the index of a key
 * @key: key of the hash_node_t
 * @size: size is the size of the array of hash_table
 *
 * Return: the index at which @key is stored in the array
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
