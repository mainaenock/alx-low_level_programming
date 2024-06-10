#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - deletes a list
 * @head: the head
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
