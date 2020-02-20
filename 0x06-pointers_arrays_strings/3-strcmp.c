#include "holberton.h"
/**
 * _strcmp - compare 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0 ; s1[i] != '\0'; i++)
		;
	for (j = 0 ; s2[j] != '\0'; j++)
		;
	if (i < j)
	{
		return (-15);
	}
	else if (j < i)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
