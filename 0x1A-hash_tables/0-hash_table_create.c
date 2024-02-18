#include "hash_tables.h"


/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array
 * Return: A pointer to the newly created hash table, if successful
 *         NULL, if otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int idx;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));

	for (idx = 0; idx < table->size; idx++)
	{
		table->array[idx] = NULL;
	}
	return (table);
}
