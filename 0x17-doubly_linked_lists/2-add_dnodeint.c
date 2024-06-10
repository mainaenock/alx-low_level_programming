#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add a node at beginning
 * @head: the head
 * @n: the data
 *
 * Return: newnode
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (!head)
	{
		return (NULL);
	}

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
