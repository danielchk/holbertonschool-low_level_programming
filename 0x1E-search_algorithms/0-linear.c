#include "search_algos.h"
/**
 * linear_search - Function that searches for a value in an array
 * @array:pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: number to search
 * Return: index if exists in array and -1 if not
 */

int linear_search(int *array, size_t size, int value)
{
	int i;
	int _size = (int)size;

	if (!array)
		return (-1);
	for (i = 0; i < _size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
