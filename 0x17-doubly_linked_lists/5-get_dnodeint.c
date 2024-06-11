#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: the head
 * @index: the position
 *
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (!head)
	{
		return (NULL);
	}
	temp = head;
	while (temp != NULL)
	{
		if (index == count)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
