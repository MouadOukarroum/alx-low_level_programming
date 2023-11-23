#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: pointer to a char or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, s1Size;
	int size;

	s1Size = strlen(s1);

	/* handling NULL passed as s1 or s2*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/*allcoating memory for our new array*/
	size = (s1Size + n + 1);
	ptr = malloc(size * sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	/* assign s1 and n of bytes from s2 to ptr*/
	for (i = 0; i < s1Size; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
