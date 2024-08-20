#include "hash_tables.h"
/**
 * hash_table_print - function
 * @ht: pointer to hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp_node;
	unsigned int comma;

	if (!ht)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		temp_node = ht->array[i];
		while (temp_node)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", temp_node->key, temp_node->value);
			temp_node = temp_node->next;

			if (comma == 0)
				comma = 1;
		}
	}
	printf("}\n");
}
