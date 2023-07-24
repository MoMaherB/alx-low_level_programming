#include "main.h"

/**
 * swap_int - function that takes a pointer to an int parametr
 *
 *@a: ...do somthing
 *@b: ...dff
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}
