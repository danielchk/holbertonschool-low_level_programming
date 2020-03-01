#include <stdio.h>
/**
 * main - print the number of flags
 * @argc: Arguments
 * @argv: Strings
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	return (0);
}
