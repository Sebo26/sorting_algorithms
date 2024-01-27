#include "sort.h"
#include <stdio.h>

/**
  * quick_sort - this function sorts array in ascending order using Quick sort.
  * @array: pointer to array to be sorted.
  * @size: the number of elements in the array.
  */
void quick_sort(int *array, size_t size)
{
	size_t i;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			if (array[size - 1] < array[size - 2])
			{
				temp = array[size - 1];
				array[size - 1] = array[size - 2];
				array[size - 2] = temp;
			}
		}
	}
}
