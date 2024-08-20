#include "hash_tables.h"
/**
 * hash_table_delete - Function
 * @ht: pointer to hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		free_hash_table(temp);
	}
	free(ht->array);
	free(ht);
}

/**
 * free_hash_table - function
 * @head: pointer
 *
 * Return: Nothing
 */
void free_hash_table(hash_node_t *head)
{
	hash_node_t *current, *next;

	current = head;

	while (current)
	{
		next = current->next;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}
}
