#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _strdup - duplicates a str passed to it using malloc
 * @str: the string to be duplicated
 * Return: NULL if it falis, a pointer to the new array if success
 */

char *_strdup(char *str)
{
	/* this is the pointer that will point to the new array */
	char *ptr;
	unsigned int i;
	unsigned int sizeOfStr;

	if (!str)
	{
		return (NULL);
	}
	sizeOfStr = (strlen(str) + 1);
	ptr = malloc(sizeOfStr * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeOfStr; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);

}
