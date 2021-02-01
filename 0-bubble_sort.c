#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * list_check - checks if list is sorted recursively
 * @array: array to be sorted
 * @size: size of array
 * Return: 1 is sorted else -1
 */
int list_check(int *array, size_t size)
{
	if (size == 1)
	{
		return (1);
	}
	if (array[size - 1] < array[size - 2])
		return (-1);
	return (list_check(array, size - 1));
}

/**
 * pass - Will iterate through the array and swap numbers
 * @array: array to be sorted
 * @size: size of array
 * @index: needed for print array
 * Return: Nothing
 */
int pass(int *array, size_t size, int index)
{
	unsigned int temp;

	if (size == 1 || array == NULL)
		return (1);
	pass(array, size - 1, index);

	if (array[size - 1] < array[size - 2])
	{
		temp = array[size - 2];
		array[size - 2] = array[size - 1];
		array[size - 1] = temp;
		print_array(array, index);
	}
	return (1);
}

/**
 * bubble_sort - bubble sort list
 * @array: array to be sorted
 * @size: size of array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	while (1 == 1)
	{
		if (list_check(array, size) == 1)
			return;
		pass(array, size, size);
	}
}
