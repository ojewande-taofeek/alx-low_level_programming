#include "hash_tables.h"

/**
 * hash_table_print - The function that prints a hash table
 * @ht: The hash table
 * Return; Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long idx, count = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		current = ht->array[idx];
		while (current)
		{
			count++;
			current = current->next;
		}
	}
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		current = ht->array[idx];
		while (current)
		{
			if (current->next == NULL && (count == 1))
				printf("\'%s\': \'%s\'", current->key, current->value);

			else
				printf("\'%s\': \'%s\', ", current->key, current->value);
			count--;
			current = current->next;
		}
	}
	printf("}\n");
}
