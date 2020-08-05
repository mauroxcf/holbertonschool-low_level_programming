#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>

/**
 * append_text_to_file - append text.
 *@filename: variable.
 *@text_content: letters.
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, a, lg;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_APPEND | O_RDWR, 0664);
	if (fd == -1)
		return (-1);

	for (a = 0; text_content[a] != '\0'; a++)
		;

	lg = write(fd, text_content, a);
	if (lg < 0)
		return (-1);

	close(fd);
	return (1);
}
