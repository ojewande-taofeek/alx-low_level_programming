#include "hash_tables.h"


/**
 * create_element - The function creates element
 * @key: The key
 * @value: The value
 * Return: element, if successful
 *         NULL, if otherwise
 */
hash_node_t *create_element(const char *key, const char *value)
{
	hash_node_t *element;

	element = malloc(sizeof(hash_node_t));

	if (element == NULL)
		return (NULL);
	element->key = strdup(key);
	if (element->key == NULL)
	{
		free(element);
		return (NULL);
	}
	if (value == NULL)
	{
		element->value = strdup("");
		if (element->value == NULL)
		{
			free(element->key);
			free(element);
			return (NULL);
		}
	}
	else
	{
		element->value = strdup(value);
		if (element->value == NULL)
		{
			free(element->key);
			free(element);
			return (NULL);
		}
	}
	element->next = NULL;
	return (element);
}

/**
 * hash_table_set - The function that adds an element to the hash table
 * @ht: The hash table created
 * @key: The key as expalined in the structure
 * @value: The value as explained in the structure
 * Return: 1, if successful
 *         0, otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element, *current;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (0);
	element = create_element(key, value);
	if (element == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = element;
		return (1);
	}
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(element->value);
			free(element->key);
			free(element->value);
			free(element);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	current = ht->array[index];
	ht->array[index] = element;
	element->next = current;
	return (1);
}
