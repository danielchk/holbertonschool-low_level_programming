#include "holberton.h"
/**
 * _print_rev_recursion - print in reverse.
 * @s: string to reverse
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
