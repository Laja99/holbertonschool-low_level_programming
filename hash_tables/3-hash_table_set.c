#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add the element to.
 * @key: The key of the element.
 * @value: The value associated with the key.
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;
	char *key_copy, *value_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			return ((current_node->value == NULL) ? 0 : 1);
		}
		current_node = current_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	key_copy = strdup(key);
	value_copy = strdup(value);
	if (key_copy == NULL || value_copy == NULL)
	{
		free(new_node);
		free(key_copy);
		return (0);
	}

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
