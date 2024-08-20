#include "hash_tables.h"
/**
 * hash_table_get - Function
 * @key: the you are looking for
 * @ht: pointer to hash table
 *
 * Return: value associeted with the element or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp_node;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[index];
	if (!temp_node)
		return (NULL);

	while (temp_node)
	{
		if (strcmp(key, temp_node->key) == 0)
			return (temp_node->value);
		temp_node = temp_node->next;
	}
	return (NULL);
}
