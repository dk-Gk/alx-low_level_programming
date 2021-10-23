#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * len - finds the length of a string
 * @s: pointer to the string
 * Return: length of the string
 */
size_t len(char *s)
{
size_t i;
for (i = 0; s[i]; i++)
;
return (i);
}
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t w;
char *empty;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}
empty = malloc(sizeof(char));
if (text_content != NULL)
{
w = write (fd, text_content, len(text_content));
}
else
w = write (fd, empty, 1);
close (fd);
if (w == -1)
{
return (-1);
}
return (1);
}
