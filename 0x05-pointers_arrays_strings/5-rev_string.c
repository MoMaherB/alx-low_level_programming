#include "main.h"
#include <string.h>

/**
 * rev_string - function thatakes a pointer to an int parametr
 *
 *@s: ...do somthing
 *
 * Return: length
 */

void rev_string(char *s)
{
	int left = 0;
	int right = strlen(s) - 1;
	char temp;

	while (left < right)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		left++;
		right--;
	}
}
