#include "sort.h"

/**
 * bubble_sort - sorts list in ascending order using Buble sort algorithm
 * @array: array
 * @size: number of elements in array
 *
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, k, temp;

	for (i = 0; i < size; i++)
	{
		for (k = 0; k < size - i - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
			}
			print_array(array, size);
		}
	}
}
