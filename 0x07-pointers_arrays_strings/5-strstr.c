#include "holberton.h"
/**
 * *_strstr - string to string
 * @haystack: String 1
 * @needle: string 2
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				return (&haystack[i]);
			}
		}
	}
	return ('\0');
}
