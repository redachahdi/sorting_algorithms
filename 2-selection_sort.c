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

	for (r_step = 0; r_step < size - 1; r_step++)
	{
		idx = r_step;
		for (k = r_step + 1; k < size; k++)
		{
			if (array[k] < array[idx])
				idx = k;
		}

		if (idx != r_step)
		{
			tmp = array[r_step];
			array[r_step] = array[idx];
			array[idx] = tmp;
			print_array(array, size);
		}
		
	}
}
