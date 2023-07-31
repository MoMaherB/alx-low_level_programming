#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 *
 * @s: Double pointer to the original pointer.
 * @to: Pointer to the new value.
 *
 * Return: Nothing (void).
 */

void set_string(char **s, char *to)
{
	*s = to;
}
