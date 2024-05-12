#include "search_algos.h"

/**
 * linear_search - searching an array value of integers using
 *					Linear search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: int value we are looking for
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}