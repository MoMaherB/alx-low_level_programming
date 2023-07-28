#include "main.h"
#include <string.h>

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer that will store the result.
 * @size_r: The size of the buffer.
 * Return: A pointer to the result or 0 if the result cannot be stored in r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = strlen(n1), int len_n2 = strlen(n2), int carry = 0;
	int sum, int i = len_n1 - 1, int j = len_n2 - 1, int idx = 0;
	int start = 0, int end = idx - 1, char temp;

	if (len_n1 + len_n2 + 1 > size_r)
		return (0);

	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		r[idx] = (sum % 10) + '0';
		carry = sum / 10;

		idx++;

		i--;
		j--;
	}
	r[idx] = '\0';

	while (start < end)

	{
		temp = r[start];
		r[start] = r[end];
		r[end] = temp;
		start++;
		end--;
	}

	return (r);
}
