#include <stdio.h>
/**
 * main - print arguments
 * @argc: Arguments
 * @argv: Pointer to strings
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum;

	for (sum = 0; sum < argc; sum++)
	{
		printf("%s\n", argv[sum]);
	}
	return (0);
}
