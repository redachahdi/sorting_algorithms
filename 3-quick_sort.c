#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * quick_sort_range_lomuto - is function Sorts a sub array using the
 *
 * @array: is array containing the sub-array.
 *
 * @low: is starting position of the sub-array.
 *
 * @high: is ending position of the sub-array.
 * @size: is length of the array.
 */
void quick_sort_lomuto(int *array, size_t low, size_t high, size_t size)
{
	size_t a, b;
	int vot;

	if ((low >= high) || (array == NULL))
		return;
	vot = array[high];
	a = low;
	for (b = low; b < high; b++)
	{
		if (array[b] <= vot)
		{
			if (a != b)
			{
				r_swap_items_r(array, a, b);
				print_array(array, size);
			}
			a++;
		}
	}
	if (a != high)
	{
		r_swap_items_r(array, a, high);
		print_array(array, size);
	}
	if (a - low > 1)
		quick_sort_lomuto(array, low, a - 1, size);
	if (high - a > 1)
		quick_sort_lomuto(array, a + 1, high, size);
}

/**
 * quick_sort - function that Sorts an array using
 *
 * @array: is array to sort.
 *
 * @size: is length of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL)
	{
		quick_sort_lomuto(array, 0, size - 1, size);
	}
}
/**
 * swap_items - function that waps two items in an array.
 *
 * @array: is array to modify.
 *
 * @l: is index of the left item.
 * @r: is index of the right item.
 */
void r_swap_items_r(int *array, size_t l, size_t r)
{
        int tmp;

        if (array != NULL)
        {
                tmp = array[l];
                array[l] = array[r];
                array[r] = tmp;
        }
}
