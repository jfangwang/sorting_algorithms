#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - checks if list is sorted
 * @list: DLL to be sorted
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *next_num, *current, *index;
	current = *list;
	if (current == NULL || current->next == NULL)
		return;
	while (current->next != NULL)
	{
		next_num = current->next;
		index = current;
		if (next_num->n < index->n)
		{
			while (next_num->n < index->n && index != NULL)
			{
				if (next_num->next != NULL)
				{
					index->next = next_num->next;
					index->next->prev = index;
				}
				else
					index->next = NULL;
				next_num->next = index;
				if (index->prev != NULL)
				{
					next_num->prev = index->prev;
					next_num->prev->next = next_num;
				}
				else
				{
					next_num->prev = NULL;
					*list = next_num;
				}
				index->prev = next_num;
				print_list(*list);
				index = next_num->prev;
			}
		}
		else
			current = current->next;
	}
}
