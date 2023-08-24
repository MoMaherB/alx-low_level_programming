#include <stdio.h>

void f(void) __attribute__ ((constructor));

/**
 * f - the function prints a sentence before main
 */
void f(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
