#include <stdio.h>

/**
 * main - entry point
 * while loop: printing alphabet in reverse
 * Return: always 0 (Success)
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
