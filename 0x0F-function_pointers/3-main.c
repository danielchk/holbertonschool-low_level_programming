#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - enter the data
 * @argc: length of the arguments
 * @argv: chars
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, k = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	if (k == '\0')
	{
		printf("Error\n");
		exit(99);
	}
	k = get_op_func(argv[2])(i, j);

	printf("%d\n", k);
	return (0);
}
