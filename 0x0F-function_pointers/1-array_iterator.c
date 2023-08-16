#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @action: A function pointer that takes an integer as an argument.
 *
 * This function iterates through the
 * array and applies the provided function
 * to each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size + 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
