#include "function_pointers.h"
/**
 * print_name - Prints the name
 * @name: name of the person
 * @f: Directions
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
