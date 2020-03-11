#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Prints the name
 * @name: name of the person
 * @f: Directions
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
