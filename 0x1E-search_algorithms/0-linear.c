#include "search_algos.h"
/**
 * Function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array:pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: number to search
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
