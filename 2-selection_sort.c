#include "sort.h"
#include <stdio.h>

/**
  * selection_sort - the function places integers in ascending order in an
  * array using Selection sort.
  * @array: pointer to array to be sorted.
  * @size: the number of elements in the array.
  */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t m;
	size_t min;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (m = i + 1; m < size; m++)
		{
			if (array[m] < array[min])
			{
				min = m;
			}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}
		for (m = 0; m < size - 1; m++)
		{
			printf("%d, ", array[m]);
		}
		printf("%d\n", array[m]);
		}
	}
}
