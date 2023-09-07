#include "hash_tables.h"

/**
 * hash_table_create - The function creates a hash table
 * @size: The maximum length of the array to be created
 * Return: table, if successful
 *         NULL, if otherwise
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int idx;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (idx = 0; idx < table->size; idx++)
		table->array[idx] = NULL;

	return (table);
}
