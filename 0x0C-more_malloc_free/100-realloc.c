#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory space using malloc and free
 * @ptr: pointer to old memory space
 * @old_size: size of old memory space
 * @new_size: size of the memory to reallocated
 * Return: NULL on failure, a void pointer on success
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptor;
	char *newPtr;
	void *ptoreturn;
	unsigned int i;

	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);

	ptor = malloc(new_size);
	if (!ptor)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr)
	{
		newPtr = ptr;
		for (i = 0; i < old_size; i++)
			ptor[i] = newPtr[i];
	}
	free(ptr);
	ptoreturn = ptor;
	return (ptoreturn);
}
