#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints the list
 * @h: the head of the list
 *
 * Return: count
 */

size_t print_list(const list_t *h)
{

	size_t count = 0;
	const list_t *temp;

	temp = h;

	while (temp != NULL)
	{
		count++;
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
	}
	return (count);
}
