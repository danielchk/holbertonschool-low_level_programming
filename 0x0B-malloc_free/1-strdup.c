#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - reallocate
 * @str: the string
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int size, i;

	if (str == '\0')
		return ('\0');

	for (size = 0; str[size] != '\0'; size++)

	s = malloc(size * sizeof(char));

	if (s == '\0')
		return ('\0');

	for (i = 0; i <= size; i++)
		s[i] = str[i];

	return (s);
}
