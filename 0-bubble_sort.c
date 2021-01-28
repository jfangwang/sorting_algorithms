#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * islistsorted - checks if list is sorted
 * @array: array to be sorted
 * @size: size of array
 * Return: 1 is sorted else -1
 */
int list_check(int *array, size_t size)
{
	if (size == 1 || size == 0)
	{
		return (1);
	}
	if (array[size - 1] < array[size - 2])
		return (-1);
	return (list_check(array, size - 1));
}

/**
 * bubble_sort - bubble sort list
 * @array: array to be sorted
 * @size: size of array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, temp;

	for (i = 0; ; i++)
	{
		if (i >= size - 1)
		{
			if (list_check(array, size) == 1)
				break;
			else
				i = 0;
		}
		if (array[i] <= array[i + 1])
			continue;
		else
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			print_array(array, size);
		}
	}
}
