#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array initialized with a char.
 * @size: size of the array
 * @c: the char the array created will be initialized with.
 * Return: NULL, or the pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
