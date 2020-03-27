#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - count the array from min to max
 * @min: first value
 * @max: last value
 * Return: Always 0.
 */
 int *array_range(int min, int max)
 {
    int *i;
    int j, sizear;

    if (min == 0 || max == 0 || min > max)
    {
        return('\0');
    }
     sizear = max - min;
     i = malloc(sizear * sizeof(int));
     for (j = min; j <= max; j++)
     {
         i[j];
     }

 }