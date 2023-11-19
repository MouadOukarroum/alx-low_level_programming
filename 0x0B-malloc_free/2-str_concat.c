#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * str_concat - concatenates tow strings
 * @s1: string number 1
 * @s2: string number 2
 * Return: NULL on failure, a pointer to the concatnated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int size;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size = (strlen(s1) + strlen(s2) + 1);
	ptr = malloc(size * sizeof(char));

	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(s1); i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i <= strlen(s2); i++)
	{
		ptr[i + strlen(s1)] = s2[i];
	}

	return (ptr);
}
