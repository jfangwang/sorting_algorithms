#ifndef SORT_H
#define SORT_H

/**
 * struct listint_t - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_t
{
	const int n;
	struct listint_t *prev;
	struct listint_t *next;
} listint_t;


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);

void selection_sort(int *array, size_t size);

size_t dlistint_len(const listint_t *h);
listint_t *add_dnodeint(listint_t **head, const int n);
listint_t *add_dnodeint_end(listint_t **head, const int n);
listint_t *get_dnodeint_at_index(listint_t *head, unsigned int index);
listint_t *insert_dnodeint_at_index(listint_t **h, unsigned int idx, int n);

#endif
