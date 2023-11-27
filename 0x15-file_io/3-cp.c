#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocate 1024 bytes
 * @file: name of the file buffer
 *
 * Return: A pointer to  new allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - Close file
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
	int ch;

	ch = close(fd);

	if (ch == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies content of  file to another file.
 * @argc: The number of arguments
 * @argv: array of pointers to args.
 *
 * Return: 0 on success.
 *
 * Description: If argument count is incorrect - exit  97.
 * If file_from doesn't  exist or cannot  read - exit  98.
 * If file_to cannot be created or written to - exit  99.
 * If file_to or file_from cannot be closed - exit 100.
 */
int main(int argc, char *argv[])
{
	int from, to, re, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	re = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(to, buff, re);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		re = read(from, buff, 1024;
		to = open(argv[2], O_WRONLY | O_APPEND);
		} while (re > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}
