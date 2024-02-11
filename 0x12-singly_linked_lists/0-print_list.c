#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints the list
 * @h: the head of the list
 *
 * Return: count
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;

	size_t count = 0;

	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", count, temp->str);
		}
		temp = temp->next;
		count++;
	}
	return (count);
}
