#include <stdio.h>
#include "sort.h"

/**
  * print_array - print array of integers
  * @array: the array
  * @size: number of elements
  */

void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
