#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t wrlen, rdlen;
char *buff;

if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
{
close(fd);
return (0);
}
rdlen = read(fd, buff, letters);
close(fd);
if (rdlen == -1)
{
free(buff);
return (0);
}
wrlen = write(STDOUT_FILENO, buff, rdlen);
free(buff);
if (rdlen != wrlen)
return (0);
wrlen += 1;
return (wrlen);
}
