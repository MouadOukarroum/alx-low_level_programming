#include "lists.h"


/**
 * _strlen - caculates size of a string
 * @s: string
 * Return: size of s
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * print_list - prints elements of a linked list
 * @h: the head pointer of the list
 * Return: returns the size of the list: nums of elements
 */

size_t print_list(const list_t *h)
{
	size_t elements = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		elements++;
		printf("[%d] %s\n", _strlen(ptr->str), ptr->str ? ptr->str : "(nil)");
		ptr = ptr->next;
	}

	return (elements);
}
