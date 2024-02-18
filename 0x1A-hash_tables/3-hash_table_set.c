#include "hash_tables.h"

/**
 * create_node - function that creates a new node
 * @key: The key of the new node
 * @value: The value mapped by the key
 * Return: A pointer to a new node, if successful
 *         NULL, if otherwise
 */

hash_node_t *create_node(const char *key, const char *value)
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
	if (value)
	{
		new_node->value = strdup(value);
		if (new_node->value == NULL)
		{
			free(new_node->key);
			free(new_node);
			return (NULL);
		}
	}
	else
		new_node->value = NULL;
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key. value must be duplicated.
 *         value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 *         In case of collision, add the new node at the beginning of the list
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *new_node;

	if (ht)
	{


		index = key_index((const unsigned char *) key, ht->size);
		new_node = create_node(key, value);
		if (new_node == NULL)
			return (0);
		if (ht->array[index] == NULL)
		{
			ht->array[index] = new_node;
			return (1);
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	return (0);
}
