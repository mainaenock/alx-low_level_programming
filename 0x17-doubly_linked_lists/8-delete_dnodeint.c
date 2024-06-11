#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at nth
 * @head: pointer to the head
 * @index: position
 *
 * Return: 1 if successful, -1 if the index is out of bounds
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *nextnode;
	unsigned int count = 0;
	
	if (!head || !*head)
		return (-1);

	temp = *head;
	while (temp)
	{
		if (index == count)
		{
			nextnode = temp->next;
			if (temp->prev)
				temp->prev->next = nextnode;
			if (nextnode)
				nextnode->prev = temp->prev;
			free(temp);
			return (1);
		}
		count++;
		temp = temp->next;
	}

	return (-1);

}

