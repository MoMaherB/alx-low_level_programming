#include "main.h"

/**
 * create_file - Creates file.
 * @filename: points toname of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	len = strlen(text_content);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	if (fd == -1)
		return (-1);

	if (write(fd, text_content, len) == -1)
		return (-1);

	close(fd);
	return (1);
}
