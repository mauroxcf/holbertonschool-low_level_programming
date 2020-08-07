#include "holberton.h"

/**
 * main - read the text and copy to a new file.
 *@argc: file with info.
 *@argv: file to copy.
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int fd, rst, fd2, wst;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while (rst)
	{
		rst = read(fd, buff, 1024);
		if (rst == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]), exit(99);

		if (rst > 0)
		{
			wst = write(fd2, buff, 1024);
			if (rst != wst || wst == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]), exit(99);
		}
	}
	if (close(fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);

	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);

	return (0);
}
