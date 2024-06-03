#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node at the beggining
 * @head: the head of the node
 * @str: the data to be added
 *
 * Return: always 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (str == NULL)
	{
		return (NULL);
	}
	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
