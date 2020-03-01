#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds arguments
 * @argc: Arguments
 * @argv: Strings of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int add = 0;
	int sum1;
	int sum2;

	if (argc < 0)
	{
		printf("%d\n", 0);
	}
	for (sum1 = 1; sum1 < argc; sum1++)
	{
		for (sum2 = 0; argv[sum1][sum2]; sum2++)
		{
			if (argv[sum1][sum2] < '0' || argv[sum1][sum2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[sum1]);
	}
	printf("%d\n", sum1);
	return (0);
}
