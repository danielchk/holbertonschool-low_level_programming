#include "holberton.h"
/**
 * _strlen_recursion - Lenght of a string
 * @s: string to count
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
