#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return nth node
 * @head: the head
 * @index: the position
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
		if (index == count)
		{
			return (temp);
		}
	}
	return (NULL);
}
