#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end
 * @head: the head
 * @str: data to be added for the newnode
 *
 * Return: the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	if (str == NULL)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(list_t));
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
	newnode->len = strlen(str);
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	newnode->next = NULL;
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);

}
