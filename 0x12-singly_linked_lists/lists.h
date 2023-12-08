#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * struct list - is a struct containing a string
 * its length and a pointer to another struct
 * @str: a pointer to a string
 * @len: length of the string
 * @next: a pointer to the next node
 */

typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);

#endif

