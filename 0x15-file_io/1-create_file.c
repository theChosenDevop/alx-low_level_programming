#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
* create_file - creates file
* @filename: input
* @text_content: input
* Return: success(1) or failure(-1)
*/

int create_file(const char *filename, char *text_content)
{
	mode_t mode;
	int fd, len, rTextcontent;

	if (!filename)
	{
		return (-1);
	}

	mode = S_IRUSR | S_IWUSR;
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len++;
		}
		rTextcontent = write(fd, text_content, len);
		if (rTextcontent == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

