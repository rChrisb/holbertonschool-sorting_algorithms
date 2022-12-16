#include "sort.h"

/**
 * quick_sort - orts an array of integers in ascending order
 * using the Quick sort algorithm
 * @array: array
 * @size: number of elements in the array
 */

void quick_sort(int *array, size_t size)
{
	if (size == 0)
		return;
	q_s_recursion(array, 0, size - 1, size);
}

/**
 * scheme - lomuto partition algorithm
 * @array: array to sort
 * @low: lower index
 * @high: higher index
 * @size: number of integers in array
 * Return: index of the pivot
 *
 */
int scheme(int *array, int low, int high, size_t size)
{
	int n, k, pivot;

	pivot = array[high];
	n = low;
	for (k = low; k < high; k++)
	{
		if (array[k] <= pivot)
		{
			if (n != k)
			{
				swapping(&array[k], &array[n]);
				print_array(array, size);
			}
			n++;
		}
	}
	if (array[high] < array[n])
	{
		swapping(&array[n], &array[high]);
		print_array(array, size);
	}
	return (n);
}
/**
 * q_s_recursion - recursion for left and right elements around the pivot
 * @low: lower index
 * @high: index max
 * @size: number of elements in array
 * @array: array to sort
 *
 */
void q_s_recursion(int *array, int low, int high, size_t size)
{
	int indexofpivot;

	if (low < high)
	{
		indexofpivot = scheme(array, low, high, size);
		q_s_recursion(array, low, indexofpivot - 1, size);
		q_s_recursion(array, indexofpivot + 1, high, size);
	}
}

/**
 * swapping - swaps two integers
 * @x: integer
 * @y: integer
 */
void swapping(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}
