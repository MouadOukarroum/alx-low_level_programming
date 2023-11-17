#include <stdio.h>


/**
 * main - prints number args passed to it
 * @argc: number of cli args
 * @argv: array of args
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);

	return (0);
}
