#include <stdio.h>

/**
 *main - entry point
 *while loop: printing numberes of base 16.
 *Return: Always 0 5 (Success)
 */

int main(void)
{
	int i = 48;
	int j = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
