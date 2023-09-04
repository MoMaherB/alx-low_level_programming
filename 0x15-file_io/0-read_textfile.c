#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Rd txt to STDOUT.
 * @filename: file to read name
 * @letters: num of letters to be read
 * Return: w- actual number of bytes or NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fptr;
	ssize_t wr;
	ssize_t t;

	fptr = open(filename, O_RDONLY);
	if (fptr == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fptr, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fptr);
	return (wr);
}
