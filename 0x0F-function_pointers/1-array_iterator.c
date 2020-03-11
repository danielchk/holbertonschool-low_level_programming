#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Execute
 * @array: functions
 * @size: size of the array
 * @action: action to do
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size != NULL)
	{
	for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
