#include "sort.h"
#include <stdio.h>

/**
  * bubble_sort - this function sorts an array using Bubble sort.
  * @array: Pointer to the array that will be sorted.
  * @size: It is the number of elements in the array.
  */
void bubble_sort(int *array, size_t size)
{
	size_t m;
	size_t i;
	size_t j;
	int temp;
	int swapped;

	swapped = 0;
	for (m = 1; m < size; m++)
	{
		for (i = 0; i < size - m; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				for (j = 0; j < size - 1; j++)
				{
					printf("%d, ", array[j]);
				}
				printf("%d\n", array[size - 1]);
				swapped = 1;
			}
		}
		if (!swapped)
		{
			break;
		}
	}
}
