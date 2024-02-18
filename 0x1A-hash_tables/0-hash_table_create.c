#include "hash_tables.h"

/**
 * create_node - function that creates a new node
 * @key: The key of the new node
 * @value: The value mapped by the key
 * Return: A pointer to a new node, if successful
 *         NULL, if otherwise
 */

hash_node_t *create_node(char *key, char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

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
