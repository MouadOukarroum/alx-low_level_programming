#include "main.h"
#include <stdlib.h>


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

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(str) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(str); i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);

}
