#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete at position
 * @head: the head
 * @index: the position
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nextnode = NULL;
	unsigned int count = 0;

	if (!*head)
	{
		return (-1);
	}
	temp = nextnode = *head;
	while (temp != NULL)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(temp);
			return (1);
		}
		else if (index - 1 == count)
		{
			nextnode = temp->next;
			temp->next = nextnode->next;
			free(nextnode);
			return (1);
		}
		count++;
		temp = temp->next;
	}
	return (-1);
}
