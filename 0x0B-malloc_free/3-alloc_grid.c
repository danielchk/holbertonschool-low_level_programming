#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - pointer to a 2 dimensinal array
 * @width: size x
 * @height: size y
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **s;

	if (width <= 0 || height <= 0)
		return ('\0');

	s = malloc(sizeof(int *) * height);
	if (s == '\0')
		return ('\0');

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);
		if (s[i] == '\0')
		{
			for (--i; i >= 0; i--)
			{
				free(s[i]);
			}
			free(s);
		}
	}
	return (s);
}
