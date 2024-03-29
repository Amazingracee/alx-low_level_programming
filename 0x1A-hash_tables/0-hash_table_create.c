#include "hash_tables.h"

/**
* hash_table_create - function that creates a hash table
* @size: the size of the array
*
* Return: a pointer to the newly created hash table, otherwise NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	unsigned long int n;

	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);

	hashTable->size = size;
	hashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashTable->array == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		hashTable->array[n] = NULL;

	return (hashTable);
}
