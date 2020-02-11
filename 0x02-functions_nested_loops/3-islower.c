#include "holberton.h"
/**
 * _islower - Entry point
 * @c: input
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
