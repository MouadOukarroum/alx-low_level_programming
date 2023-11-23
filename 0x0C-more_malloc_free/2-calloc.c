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
	int *ptr;
	void *toreturn;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	toreturn = &ptr;
	return (toreturn);
}
