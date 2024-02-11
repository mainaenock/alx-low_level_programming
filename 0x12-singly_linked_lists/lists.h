#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#ifndef MAIN_H
#define MAIN_H

typedef struct list
{
	char *str;
	size_t len;
	struct list *next;
} list_t;
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif
