#include "main.h"

/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 * Return: 0 Always
 */
int main(int ac, char **av)
{
	int src, dest, close_src, close_dest, wBytes, rBytes;
	char buf[1024];
	unsigned int  mode;

	rBytes = 1024;
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(av[1], O_RDONLY);
	error_check(src, -1, av[1], 'O');

	dest = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	error_check(dest, -1, av[2], 'W');

	while (rBytes == 1024)
	{
		rBytes = read(src, buf, sizeof(buf));
		if (rBytes == -1)
		{
			error_check(-1, -1, av[1], 'O');
		}
		wBytes = write(dest, buf, rBytes);
		if (wBytes == -1)
		{
			error_check(-1, -1, av[2], 'W');
		}
	}
	close_src = close(src);
	error_check(close_src, src, NULL, 'C');

	close_dest = close(dest);
	error_check(close_dest, dest, NULL, 'C');

	return (0);
}

/**
 * error_check - check for errors
 * @fildes: file descriptor
 * @fd: file descriptor
 * @filename: file
 * @call: type of system call
 * Return: void
 */
void error_check(int fildes, int fd, char *filename, char call)
{
	if (fildes == -1 && call == 'O')
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (fildes == -1 && call == 'W')
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	else if (call == 'C' && fildes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
