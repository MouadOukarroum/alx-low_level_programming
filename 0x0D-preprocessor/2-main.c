#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the input file
 * __FILE__: a predefined macro that contains the name of input file
 * Return: always 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
