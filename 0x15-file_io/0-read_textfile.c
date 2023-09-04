#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX stdout
* @filename: input
* @letters: input
* Return: Read file
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rBytes, wBytes;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
	{
		close(fd);
		return (0);
	}

	rBytes = read(fd, buf, letters);
	if (rBytes == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	wBytes = write(STDOUT_FILENO, buf, rBytes);
	if (wBytes == -1 || wBytes != rBytes)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (wBytes);
}
