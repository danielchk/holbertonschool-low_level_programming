#include "holberton.h"
/**
 * _strstr - string to string
 * @haystack: string 1
 * @needle: string 2
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (*needle == 0)
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
