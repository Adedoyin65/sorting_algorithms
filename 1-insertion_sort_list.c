#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 * @list: Pointer to the head of the doubly linked list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *dan, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	dan = (*list)->next;
	while (dan != NULL)
	{
		tmp = dan;
		while (tmp->prev != NULL && tmp->n < tmp->prev->n)
		{
			if (tmp->next != NULL)
			{
				tmp->next->prev = tmp->prev;
			}
			tmp->prev->next = tmp->next;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			if (tmp->prev != NULL)
			{
				tmp->prev->next = tmp;
			}
			if (tmp->prev == NULL)
			{
				*list = tmp;
			}
			tmp->next->prev = tmp;
			print_list(*list);
		}
		dan = dan->next;
	}
}
