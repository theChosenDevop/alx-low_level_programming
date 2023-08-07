#include "main.h"

/**
 * create_file - creates a file
 * @filename: file input
 * @text_content: string
 * Return: 1 (success) or -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	mode_t mode;
	int fd, len, wBytes;

	if (filename == NULL)
	{
		return (-1);
	}

	mode = S_IRUSR | S_IWUSR;
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	len = strlen(text_content);
	wBytes = write(fd, text_content, len);
	if (wBytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
