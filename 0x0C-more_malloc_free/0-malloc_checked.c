#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * malloc_checked - allocate some memoery in heap
 * @b: the size fo memory to be allocated
 * Return: a pointer on Success, 98 otherwise.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return ptr;
}
