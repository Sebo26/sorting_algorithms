#include "sort.h"
#include <stdio.h>

/**
  * bubble_sort - this function sorts an array using Bubble sort.
  * @array: Pointer to the array that will be sorted.
  * @size: It is the number of elements in the array.
  */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;

	while (size > 0)
	{
		for (i = 0; i < size - 2; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
			printf("%d", *array);
			printf("\n");
		}
	}
}
