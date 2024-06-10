#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add node at beginning
 * @head: the head
 * @n: data
 *
 * Return: newnode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
