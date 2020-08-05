#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>

/**
 * create_file - create a file.
 *@filename: variable.
 *@text_content: letters.
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, a, lg;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);

	for (a = 0; text_content[a] != '\0'; a++)
		;

	lg = write(fd, text_content, a);
	if (lg < 0)
		return (0);

	close(fd);
	return (1);
}
