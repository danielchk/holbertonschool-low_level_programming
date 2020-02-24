#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0, j = size - 1; i < size * size; i += size + 1, j += size -1)
	{
		sum1 += a[i];
		sum2 += a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}
