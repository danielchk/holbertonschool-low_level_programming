#include "holberton.h"
#include <stdlib.h>
/**
 * *_strdup - reallocate
 * @str: the string
 * Return: direction of string.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int size, i;

	if (str == '\0')
		return ('\0');

	for (size = 0; str[size] != '\0'; size++)

	s = malloc(1 + size * sizeof(char));

	if (s == '\0')
		return ('\0');

	for (i = 0; i <= size; i++)
		s[i] = str[i];

	return (s);
}
