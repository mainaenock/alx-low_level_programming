#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum of all data of the list
 * @head: the head
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int num = 0;

	temp = head;
	if (!head)
	{
		return (0);
	}
	while (temp != NULL)
	{
		num += temp->n;
		temp = temp->next;
	}
	return (num);

}
