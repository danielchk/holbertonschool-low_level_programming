#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int r, g;

	n = n - 1;
	r = 0;
	while (r < n)
	{
		g = a[r];
		a[r] = a[n];
		a[n] = g;
		r++;
		n--;
	}

}
