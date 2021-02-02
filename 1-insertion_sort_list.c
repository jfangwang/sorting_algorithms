#include "sort.h"

/**
 * insertion_sort_list - checks if list is sorted
 * @list: DLL to be sorted
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *next_num, *current, *index;

	if (list == NULL || *(list) == NULL || (*list)->next == NULL)
		return;
	current = *list;
	while (current->next != NULL)
	{
		next_num = current->next;
		index = current;
		if (next_num->n < index->n)
		{
			while (next_num->n < index->n)
			{
				index->next = next_num->next;
				next_num->next = index;
				next_num->prev = index->prev;
				index->prev = next_num;
				if (next_num->prev != NULL)
					next_num->prev->next = next_num;
				else
					*list = next_num;
				if (index->next != NULL)
					index->next->prev = index;
				print_list(*list);
				if (next_num->prev != NULL)
					index = next_num->prev;
				else
					break;
			}
			current = current->prev;
		}
		current = current->next;
	}
}
