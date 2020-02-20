#include "holberton.h"
/**
 * _strcmp - compare 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		i++;
		return (s1[i] - s2[1]);
	}
	return (s1[i] - s2[i]);
}
