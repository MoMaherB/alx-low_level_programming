#include "main.h"

/**
*array_range - the function
*@min: the minimum
*@max: the maximum
* Return: arr
*/

int *array_range(int min, int max)
{
	int i;

	if (min > max)
	{
		return (NULL);
	}

	int size = max - min + 1;
	int *arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
