#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at index
 * @head: the head
 * @idx: the position
 * @n: the data of new node
 *
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int count = 0;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	temp = *head;
	newnode->n = n;
	if (!newnode)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newnode;
	}
	while (temp != NULL)
	{
		if (idx - 1 == count)
		{
			newnode->next = temp->next;
			temp->next = newnode;

		}
		count++;
		temp = temp->next;
	}
	return (NULL);

}
