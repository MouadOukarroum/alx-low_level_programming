#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char chara = 'c';
	int num = 3;
	long int num1 = 2;
	long long int num2 = 3;
	float num3 = 4.4;

	printf("Size of a char: %zu byte(s)\n", sizeof(chara));
	printf("Size of an int: %zu byte(s)\n", sizeof(num));
	printf("Size of a long int: %zu byte(s)\n", sizeof(num1));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(num2));
	printf("Size of a float: %zu byte(s)\n", sizeof(num3));
	return (0);

}
