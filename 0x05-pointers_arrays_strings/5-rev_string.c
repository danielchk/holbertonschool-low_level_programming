#include "holberton.h"
/**
 * rev_string - Entry point
 * @s: reverse word
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int h, j;
	int reverse;

	for (h = 0 ; s[h] != '\0' ; h++)
	{
	}

	j = 0;
	h = h - 1;
	while (j < h)
	{
		reverse = s[j];
		s[j] = s[h];
		s[h] = reverse;
		h--;
		j++;
	}
}
