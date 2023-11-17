#include <stdio.h>
#include <stdlib.h>

/**
 * main - multipies two nums
 * @argc:  number of args
 * @argv:  args
 * Return: 0 is it's successfull, otherwise 1
 */

int main(int argc, char *argv[])
{
	int num;
	int num1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num  = atoi(argv[1]);
	num1 = atoi(argv[2]);
	printf("%d\n", (num * num1));
	return (0);
}
