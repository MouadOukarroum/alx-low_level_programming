#include <stdio.h>

/**
 * main - entry point of the programm
 * while loop: printing com of numbers
 * Return: always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j = 1;
	
	while ( i <= 8 && j <= 9 && i != j)
	{
		putchar(i+ '0');
		i++;
		putchar(j+ '0');
		j++;
	}
	putchar('\n');
	return (0);	
}
