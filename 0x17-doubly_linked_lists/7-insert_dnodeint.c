#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: the head
 * @idx: the position
 * @n: the data
 *
 * Return: newnode
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newnode;
	unsigned int count = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (!h)
		return (NULL);
	if (!*h)
	{
		*h = newnode;
		newnode->prev = NULL;
		newnode->n = n;
	}
	temp = *h;
	while (temp != NULL)
	{
		if ((idx - 1) == count)
		{
			newnode->n = n;
			newnode->next = temp->next;
			newnode->prev = temp;
			temp->next = newnode;
			return (newnode);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);

}
