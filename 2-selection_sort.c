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
	unsigned int s_idx, u_idx, min_idx;
	int hold_val;

	for (s_idx = 0; s_idx < size; s_idx++)
	{
		for (u_idx = s_idx, min_idx = u_idx; u_idx < size; u_idx++)
			if (array[u_idx] < array[min_idx])
				min_idx = u_idx;
		u_idx = s_idx;
		if (array[u_idx] != array[min_idx])
		{
			hold_val = array[u_idx];
			array[u_idx] = array[min_idx];
			array[min_idx] = hold_val;
			print_array(array, size);
		}
	}
}
