#include "main.h"

/**
 * read_textfile- Rd txt to STDOUT.
 * @filename: file to read name
 * @letters: num of letters to be read
 * Return: w- actual number of bytes or NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	rd = read(fp, buffer, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
		return (0);

	free(buffer);
	close(fp);
	return (wr);
}
