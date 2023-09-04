#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: input
* @text_content: input
* Return: success (1) or failure (-1)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wTextcontent, len;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (!fd)
	{
		return (-1);
	}

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		wTextcontent = write(fd, text_content, len);
		if (wTextcontent == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
