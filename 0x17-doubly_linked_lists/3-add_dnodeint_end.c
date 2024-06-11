#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: the head
 * @n: the data
 *
 * Return: newnode
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newnode;

	if (!head)
	{
		return (NULL);
	}
	temp = *head;
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		return (NULL);
	}
	if (!*head)
	{
		*head = newnode;
		newnode->prev = NULL;
		return (newnode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	newnode->n = n;
	newnode->next = NULL;
	temp->next = newnode;
	newnode->prev = temp;
	return (newnode);

}
