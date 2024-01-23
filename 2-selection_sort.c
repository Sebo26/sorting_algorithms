#include "sort.h"
#include <stdio.h>

/**
  * selection_sort - the function places integers in ascending order in an array using Selection sort
  * @array: pointer to array to be sorted.
  * @size: the number of elements in the array.
  */
void selection_sort(int *array, size_t size)
{
	size_t i;
	int min;
	int temp;
	for (i = 0; i <= size - 1; i++)
	{
		array[0] = min;
		if (min < array[i])
		{
			temp = min;
			min = array[i];
			array[i] = temp;
		}
		printf("%d", *array);
		printf("\n");
	}	
}
