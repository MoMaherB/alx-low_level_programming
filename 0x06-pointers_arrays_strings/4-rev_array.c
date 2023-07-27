#include "main.h"

/**
 * reverse_array - function that takes a pointer to an int parametr
 *
 *@a: ...do somthing
 *@n: ..dkkf
 *
 * Return: dest
 */

void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;
	int temp;

	while (left < right)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;

		left++;
		right--;
	}
}
