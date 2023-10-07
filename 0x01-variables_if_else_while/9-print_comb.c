#include <stdio.h>

/**
 *main- entry point
 * while loop: printing single digit numbers
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
