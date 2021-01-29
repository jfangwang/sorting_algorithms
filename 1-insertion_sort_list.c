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
	listint_t *next_num;
	listint_t *current;
	listint_t *sort;
	listint_t *temp;

	current = *list;
	if (current == NULL)
		return;

	while (current->next != NULL)
	{
		/* curr at i[0] */
		next_num = current->next;

		if (next_num < current)
		{
			/*takes next num and sorts it*/
			sort = next_num->prev
			if (next_num < current)
				sort = sort->prev;
			else
			{
				temp = sort;
				sort = next_num;
				num 
			}
		}
	}
}
