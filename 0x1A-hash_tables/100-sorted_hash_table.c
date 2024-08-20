#include "hash_tables.h"
/**
 * Sorted hash table
 * shash_table_create - function to create sorted hash table
 * @size: size of hash table
 *
 * Return: initiated hash table
 * Description: this sorted hash table uses seperate chain method
 * to handle collision and the sorted ability has been implemented
 * using doubly linked list.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *sht;

	if (!(size) || size == 0)
		return (NULL);

	i = 0;

	sht = malloc(sizeof(shash_table_t *));
	if (!sht)
		return (NULL);

	sht->size = size;
	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (!(sht->array))
	{
		free(sht);
		return (NULL);
	}
	
	for (; i < size; i++)
		sht->array[i] = NULL;

	sht->shead = sht->stail = NULL;
	return (sht);
}

/**
 * make_shash_node - make new node
 * @key: pointer to key
 * @value: pointer to value
 *
 * Return: new shash node
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
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
	new_node->next = new_node->sprev = new_node->snext = NULL;
	
	return (new_node);
}

/**
 * shash_table_set - sorted hash table set
 * @ht: pointer to hash table
 * @key: the key
 * @value: key/value pair
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *node;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	if (!node)
	{
		new_node = make_shash_node(key, value);
		if (!new_node)
			return (0);
		node = new_node;
		sort_hash_table(ht, new_node);
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
	
	if (!(new_node = make_shash_node(key, value)))
		return (0);
	node = new_node;
	sort_hash_table(ht, new_node);
	return (1);
}

/**
 * *shash_table_get - get a value from the hash table
 * @ht: pointer to hash table
 * @key: the key
 *
 * Return: Value for the given key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;
	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (!node)
		return (NULL);
	while (node)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * sort_hash_table - function to sort keys on the hash table without
 * changing their index on the table
 * @ht: pointer to hash table
 *
 * Return: Nothing
 */
void sort_hash_table(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *temp;

	if (ht->shead == NULL)
	{
		new_node->sprev = new_node->snext = NULL;
		ht->shead = ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, new_node->key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext && strcmp(temp->snext->key, \
					new_node->key) < 0)
			temp = temp->snext;
		new_node->sprev = temp;
		new_node->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new_node;
		else
			temp->snext->sprev = new_node;
		temp->snext = new_node;
	}
}

/**
 * shash_table_print - print sorted hash table
 * @ht: pointer to hash table
 *
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int comma;
	shash_node_t *temp;

	if (!ht)
		return ;

	comma = 0;
	
	temp = ht->shead;
	putchar('{');
	while (temp)
	{
		if (comma)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
		if (comma == 0)
			comma = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print hash table in reversed order
 * @ht: pointer to hash table
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned int comma;
	shash_node_t *temp;

	if (!ht)
		return ;

	comma = 0;
	
	temp = ht->stail;
	putchar('{');
	while (temp)
	{
		if (comma)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
		if (comma == 0)
			comma = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - free memory
 * @ht: pointer to hash table
 *
 * Return: nothinh
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *current, *temp;
		
	if (!ht)
		return ;
	current = ht->shead;
	while (current)
	{
		temp = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = temp;
	}
	free(head->array);
	free(head);
}
