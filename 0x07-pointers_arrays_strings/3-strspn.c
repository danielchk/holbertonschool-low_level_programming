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
	int k;

	for (i = 0; accept[i]; i++)
	{

		for (j = 0; s[j] != ','; j++)
		{
			if (s[j] == accept[i])
				k++;
		}
	}
	return (k);
}
