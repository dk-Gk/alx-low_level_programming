#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *rd;
ssize_t size_r;
ssize_t size_w;
if (filename == NULL)
return (0);
fd = open(filename, O_RDWR);
if (fd == -1)
{
return (0);
}
rd = malloc(sizeof(char) * letters);
if (rd == NULL)
{
close(fd);
return (0);
}
size_r = read(fd, rd, letters);
close(fd);
if (size_r == -1)
{
return (0);
}
size_w = write(STDOUT_FILENO, rd, size_r);
close (fd);
if (size_w == -1 || size_w != size_r)
{
return (0);
}
return (size_w);
}
