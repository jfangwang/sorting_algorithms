#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * siftDown - uses heap sort algorithm to sort int array
 * @array: array to be sorted
 * @start: start of array
 * @end: end of array
 * Return: Nothing
 */
void siftDown(int *array, int start, int end, size_t size)
{
	int root = start, child, swap_hold, val_hold;

	while (2 * root <= end)
	{
		child = 2 * root;
		swap_hold = root;

		if (array[swap_hold] < array[child])
			swap_hold = child;
		if (child + 1 <= end && array[swap_hold] < array[child + 1])
			swap_hold = child + 1;
		if (swap_hold == root)
			return;
		else
		{
			val_hold = array[root];
			array[root] = array[swap_hold];
			array[swap_hold] = val_hold;
			root = swap_hold;
			print_array(array, size);
		}
	}
}

/**
 * heapify - constructs heap
 * @array: array to be sorted
 * @size: size of array
 * Return: Nothing
 */
void heapify(int *array, size_t size)
{
	int start = (size - 1) / 2;

	while (start >= 0)
	{
		siftDown(array, start, size - 1, size);
		start -= 1;
	}
}

/**
 * heap_sort - uses heap sort algorithm to sort int array
 * @array: array to be sorted
 * @size: size of array
 * Return: Nothing
 */
void heap_sort(int *array, size_t size)
{
	int end = size - 1;
	int hold;

	heapify(array, size);

	while (end > 0)
	{
		if (array[0] != array[end])
		{	
			hold = array[end];
			array[end] = array[0];
			array[0] = hold;
			print_array(array, size);
		}
		end -= 1;
		siftDown(array, 0, end, size);
	}
}