#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


/**
 * selection_sort - function that integers in ascending order
 * @array: is The array
 * @size: is the size of the array
 * Return: is the void
 */
void selection_sort(int *array, size_t size)
{
	size_t k, r_step, idx;
	int tmp;

	for (step = 0; step < size - 1; step++)
	{
		idx = step;
		for (k = step + 1; k < size; k++)
		{
			if (array[k] < array[idx])
				idx = k;
		}

		if (idx != step)
		{
			tmp = array[step];
			array[step] = array[idx];
			array[idx] = tmp;
			print_array(array, size);
		}
		
	}
}
