#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - deletes the list
 * @head: the head
 *
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *temp;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
		free(head->str);
	}
}
