#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;
	ssize_t w;
	while ( *text_content != '\0')
	{
		count++;
		text_content++;
	}
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
	w = write (fd, text_content, count);
	}
	close (fd);
	if (w == -1)
	{
		return (-1);
	}
	return (1);
}
