#include <stdio.h>
#include <stdlib.h>
/**
 * main - Argc, argv
 * @argc: Arguments to run
 * @argv: Array of strings
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
