#include "search_algos.h"
/**
 * binary_search - Function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array:pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: number to search
 * Return: index if exists in array or -1 if not
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i,  first = 0, last = size - 1, mid;

	if (!array)
		return (-1);
	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i < last; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);
		mid = (first + last) / 2;
		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] > value)
			last = mid - 1;
		else
			first = mid + 1;
	}
	return (-1);
}
