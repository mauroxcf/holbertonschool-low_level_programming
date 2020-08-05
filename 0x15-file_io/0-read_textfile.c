#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>

/**
 * read_textfile - read the text.
 *@filename: variable.
 *@letters: letters.
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fdr, fdw;
	char *buf;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fdr = read(fd, buf, letters);
	if (fdr == -1)
		return (0);

	buf[fdr] = '\0';

	fdw = write(STDOUT_FILENO, buf, fdr);
	if (fdw == -1)
		return (0);

	free(buf);
	close(fd);
	return(fdw);
}
