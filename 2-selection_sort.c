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
	int dan;
	size_t i, j, n;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		n = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[n])
			{
				n = j;
			}
		}
		if (n != i)
		{
			dan = array[i];
			array[i] = array[n];
			array[n] = dan;
		}
		print_array(array, size);
	}
}
