#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: members of the array
 * @size: size of the array
 * Return: a void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *onebyte;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb *  size);
	if (ptr == NULL)
		return (NULL);

	onebyte = ptr;

	for (i = 0; i < (nmemb * size); i++)
		onebyte[i] = '\0';

	return (ptr);
}
