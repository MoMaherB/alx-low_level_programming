#include "main.h"
#include <string.h>
/**
 * create_file - Creates file.
 * @filename: points toname of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;
	
	if(filename == NULL)
		return (-1);

	len = strlen(text_content);
	if(text_content == NULL)
		len= 0;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
