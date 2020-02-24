#include "holberton.h"
/**
 * *_strchr - chars
 * @s: To search
 * @c: Char to search
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
