#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that writes a quote to the standard output
 *
 * Return: Always 1 (error)
 */


int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quo, 59);
	return (1);
}
