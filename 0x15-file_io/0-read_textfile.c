#include "main.h"

/**
 * read_textfile - reads a file and prints it to the `POSIX` standaed output
 * @filename: pointer to file `av[1]`
 * @letters: count of letters to be printed
 * Return: array of strings or 0 for failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rBytes, wBytes;
	int fd;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	rBytes = read(fd, buf, letters);
	if (!rBytes)
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
