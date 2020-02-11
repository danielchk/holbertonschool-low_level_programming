#include "holberton.h"
/**
 * _islower - Entry point
 * @c: input
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 65 && c < 91)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
