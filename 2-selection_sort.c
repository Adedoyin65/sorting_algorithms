#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - A function that sorts the array by selection.
 * @array: Array to be sorted.
 * @size: The size of the array.
 * Return: Nothing.
 */

void selection_sort(int *array, size_t size)
{
	int dan, n;
	size_t i, j;

	if (array == NULL || size == 0)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		dan = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < dan)
			{
				dan = array[j];
				n = j;
			}
		}
		array[n] = array[i];
		array[i] = dan;
		print_array(array, size);
	}
}
