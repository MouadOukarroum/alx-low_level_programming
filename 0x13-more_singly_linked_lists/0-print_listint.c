#include "lists.h"


/**
 * print_listint - prints a list of numbers
 * @h: the head of the list
 * Return: the number of nodes
 */


size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
