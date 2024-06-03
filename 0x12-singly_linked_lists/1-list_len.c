#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - function to print the items in the list
 * @h: the head
 *
 * Return: always 0
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp;

	temp = h;
	while (temp != 0)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
