#include "sort.h"
#include <stdio.h>
#include <string.h>

/**
  * insertion_sort_list - this function uses the Insertion sort to sort a
  * doubly linked list in ascending order.
  * @list: It is a pointer that points to a pointer pointing to the list.
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	int key;
	listint_t *current;
	
	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	current = (*list)->next;
	while (current != NULL)
	{
		temp = current;
		key = current->n;
		while (temp->prev != NULL && temp->prev->n > key)
		{
			temp->n = temp->prev->n;
			temp = temp->prev;
		}

		temp->n = key;
		current = current->next;
	}
}
