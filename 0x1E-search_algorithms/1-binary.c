#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	int start, mid, end, i;

	start = 0;
	end = size - 1;
	mid = size / 2;

	if (!array)
		return (-1);
	if (array[mid] == value)
		return (mid);
	while (array[mid] != value)
	{
		if (start <= end)
		{
			mid = (start + end) / 2;
			printf("Searching in array: ");
			for (i = start; i < end; i++)
			{
				printf("%d, ", array[i]);
			}
			if (value > array[mid])
			{
				start = mid + 1;
			}
			else
			{
				end = mid - 1;
			}
			continue;
		}
		else
		{
			return (-1);
		}
	}
	return (mid);
}
