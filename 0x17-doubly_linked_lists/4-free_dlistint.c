#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - deletes the list
 * @head: the head
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *nextnode;

	if (!head)
	{
		return;
	}
	nextnode = head;
	while (head != NULL)
	{
		temp = head;
		nextnode = nextnode->next;
		head = nextnode;
		free(temp);
	}

}
