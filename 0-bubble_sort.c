#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - is function sorts an array
 * @array: is the array of integer
 * @size: is the size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t k;
	int tmp, _sort;

	if (!array || size == 0)
		return;

	do {
		_sort = 1;
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				_sort = 0;
				tmp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = tmp;
				print_array(array, size);
			}
		}

	} while (_sort == 0);
}
