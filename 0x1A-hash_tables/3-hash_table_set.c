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

	if (key == NULL || value == NULL)
		return (NULL);

	element = malloc(sizeof(hash_node_t));

	if (element == NULL)
		return (NULL);
	element->key = strdup(key);
	if (element->key == NULL)
	{
		free(element);
		return (NULL);
	}
	element->value = strdup(value);
	if (element->value == NULL)
	{
		free(element->key);
		free(element);
		return (NULL);
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
	hash_node_t *element, *current_element;
	unsigned long int index;

	element = create_element(key, value);
	if (element == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	current_element = ht->array[index];
	if (current_element == NULL)
	{
		ht->array[index] = element;
		return (1);
	}
	if (strcmp(current_element->key, key) == 0)
	{
		strcpy(ht->array[index]->value, value);
		return (1);
	}
	element->next = current_element;
	return (1);
}
