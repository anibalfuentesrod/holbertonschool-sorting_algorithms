#include "sort.h"
/**
 * shell_sort - sorts an array of int in ascend
 * @array: array to be sorted
 * @size: size of the array
**/
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int temp;
	int sorted;

	while (gap < size / 3)
		gap = gap * 3 + 1;

	for (; gap > 0; gap /= 3)
	{
		sorted = 0;

		for (i = gap; i < size; i++)
		{
			temp = array[i];

			for (j = i; j >= gap && array[j - gap] > temp; j -= gap)
			{
				array[j] = array[j - gap];
				sorted = 1;
			}
			array[j] = temp;
		}
		if (sorted)
			print_array(array, size);

	}

}
