#include <stdio.h>
/**
 * print_array - Entry point
 * @a: pointer
 * @n: imput
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		putchar('\n');
	}
}
