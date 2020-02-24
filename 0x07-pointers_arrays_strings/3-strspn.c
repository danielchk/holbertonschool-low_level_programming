#include "holberton.h"
/**
 * _strspn - counts same chars in the first word
 * @s: pointer
 * @accept: pointer 2
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int k;

	for (i = 0; s[i] != ' '; i++)
	{

		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				k++;
		}
	}
	return (k);
}
