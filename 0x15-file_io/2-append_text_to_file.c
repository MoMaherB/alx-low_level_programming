#include "main.h"

/**
 * append_text_to_file - Append a text at end of file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If fails or NULL or If file not exist or user dont have
 * write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int on, wr, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	on = open(filename, O_WRONLY | O_APPEND);
	wr = write(on, text_content, l);

	if (on == -1 || wr == -1)
		return (-1);

	close(on);

	return (1);
}
