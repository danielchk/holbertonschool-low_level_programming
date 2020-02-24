#include "holberton.h"
/**
 * *_strchr - chars
 * @s: To search
 * @c: Char to search
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}
	return (p);
}
