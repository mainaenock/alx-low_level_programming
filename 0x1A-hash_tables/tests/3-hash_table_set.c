#include "hash_tables.h"
/**
 * hash_table_set - Function
 * @key: The key
 * @value: value assoscieted with key
 * @ht: pointer to hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 * Description: Adds an element to the hash table
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *node;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	if (!node)
	{
		new_node = create_new_node(key, value);
		if (!new_node)
			return (0);

		ht->array[index] = new_node;
		return (1);
	}

	while (node)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (!(node->value))
				return (0);
			return (1);
		}
		node = node->next;
	}

	new_node = create_new_node(key, value);
	if (!new_node)
		return (0);

	node = new_node;
	return (1);
}

/**
 * create_new_node - create a new node
 * @key: the key
 * @value: value associated with the key
 *
 * Return: new_node
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (NULL);

	new_node->key = strdup(key);
	if (!(new_node->key))
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (!(new_node->value))
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

