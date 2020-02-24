#include "holberton.h"
/**
 * _strspn - counts same chars in the first word
 * @s: pointer
 * @accept: pointer 2
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;

	for (i = 0; s[i] != ' '; i++)
	{

		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				k++;
		}
	}
	return (k);
}
