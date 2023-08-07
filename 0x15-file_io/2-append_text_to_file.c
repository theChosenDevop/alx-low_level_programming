#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file
 * @text_content: string to be passed to file
 * Return: 1 (success) or -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wBytes, len;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_APPEND);

	if (!fd)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		wBytes = write(fd, text_content, len);
		if (wBytes == -1 || wBytes != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
