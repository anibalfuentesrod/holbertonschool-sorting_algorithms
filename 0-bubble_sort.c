#include "sort.h"
/**
 * swap - swaps two integers
 * @a: pointer to the first integer
 * @b: pointer to the seond integer
**/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * bubble_sort - sorts an array of integer in ascending order
 * @array: array to be sorted
 * @size: size of the array
**/
void bubble_sort(int *array, size_t size)
{
	int swapped;
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

	for (j = 0; j < size - i - 1; j++)
	{
		if (array[j] > array[j + 1])
		{
			swap(&array[j], &array[j + 1]);
			swapped = 1;

			for (k = 0; k < size; k++)
			{
				printf("%d", array[k]);
				if (k < size - 1)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
	}
		if (swapped == 0)
		{
		break;
		}
	}
}
