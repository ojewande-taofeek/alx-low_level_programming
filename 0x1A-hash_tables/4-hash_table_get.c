#include "hash_tables.h"
/**
 * hash_table_get - The  function that retrieves a value associated with a key
 * @ht: The table created
 * @key: The key
 * Return: The value mapped to key, if successful
 *         NULL, if otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
