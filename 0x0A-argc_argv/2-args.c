#include <stdio.h>


/**
 * main - prints its args
 * @argc: number of args
 * @argv: array of args
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
