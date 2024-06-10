#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: the head
 *
 * Return: data of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (!head ||!*head)
	{
		return (0);
	}
	temp = *head;
	*head = temp->next;
	return (temp->n);
	free(temp);
}
