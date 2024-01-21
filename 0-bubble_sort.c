#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - A function that sorts number in ascending order.
 * @array: A pointer to integer.
 * @size: The size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp, swap = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swap = 1;
				if (swap == 1)
				{
					print_array(array, size);
				}
			}
		}
	}
}
