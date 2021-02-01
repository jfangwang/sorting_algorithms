#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * partition - selection sort of array
 * @array: array to be sorted
 * @lo: beginning of array
 * @hi: end of array
 * @size: size
 * Return: Nothing
 */

int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi], i = lo, j, hold;

	for (j = lo; j < hi; j++)
		if (array[j] < pivot)
		{
			hold = array[j];
			array[j] = array[i];
			array[i] = hold;
			if (array[i] != array[j])
				print_array(array, size);
			i += 1;
		}
	hold = array[i];
	array[i] = array[hi];
	array[hi] = hold;
	if (array[i] != array[hi])
		print_array(array, size);
	return (i);
}

/**
 * quick_helper - selection sort of array
 * @array: array to be sorted
 * @lo: beginning of array
 * @hi: end of array
 * @size: size
 * Return: Nothing
 */

void quick_helper(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		quick_helper(array, lo, p - 1, size);
		quick_helper(array, p + 1, hi, size);
	}
}

/**
 * quick_sort - selection sort of array
 * @array: array to be sorted
 * @size: size of array
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	quick_helper(array, 0, size - 1, size);
}
