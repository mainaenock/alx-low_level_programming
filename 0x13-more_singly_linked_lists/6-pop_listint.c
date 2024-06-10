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
	int num;

	if (!head ||!*head)
	{
		return (0);
	}
	temp = *head;
	num = temp->n;
	*head = temp->next;
	free(temp);
	return (num);
}
