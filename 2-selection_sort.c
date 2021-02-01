#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - selection sort of array
 * @array: array to be sorted
 * @size: size of array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	unsigned int index, pos, min;
	int hold;

	for (pos = 0; pos < size; pos++)
	{
		min = pos;
		for (index = pos; index < size; index++)
			if (array[index] < array[min])
				min = index;
		hold = array[min];
		for (index = min; index > pos; index--)
			array[index] = array[index - 1];
		array[pos] = hold;
		print_array(array, size);
	}
}
