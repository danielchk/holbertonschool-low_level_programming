#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup
 * @str: the string
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int size;

	if (str == '\0')
		return ('\0');

	for (i = 0; str[i] != '\0'; i++)
		size = i;

	s = malloc(sizeof(char) * i);

	if (s == '\0')
		return ('\0');

	for (i = 0; i <= size ; i++)
		s[i] = str[i];

	return (s);
}
