#include <stdlib.h>
#include "holberton.h"
/**
 * *str_concat - concatenate two strings
 * @s1: string
 * @s2: string 2
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2, sum, i, j;
	char *con;

	if (s1 == '\0')
		*s1 = '\0';
	if (s2 == '\0')
		*s2 = '\0';
	for (size1 = 0; s1[size1]; size1++)
	{
	}
	for (size2 = 0; s2[size2]; size2++)
	{
	}
	sum = size1 + size2 + 1;
	con = malloc(sum * sizeof(char));
	if (con == '\0')
		return ('\0');
	for (i = 0; i < size1; i++)
	{
		con[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		con[size1 + j] = s2[j];
	}
	con[size1 + size2 + 1] = '\0';
	return (con);
}
