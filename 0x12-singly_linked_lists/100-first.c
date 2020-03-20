#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * First_this - printf before main
 * Return: Nothing.
 */
void print_start(void)
{
	char *s1 = "You're beat! and yet, you must allow,\n";
	char *s2 = "I bore my house upon my back!\n";

	printf("%s%s", s1, s2);
}
