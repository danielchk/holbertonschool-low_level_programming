#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Search integer
 * @array: elements
 * @size: size of array
 * @cmp: pointer to the function
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (cmp != NULL && array != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i); 
		}
	}
	return (-1);
}
