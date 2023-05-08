#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
* read_textfile- function reads text file and prints it  to STDOUT
* @filename: Name of the file to read
* @letters: Number of letters to be read and print
*
* Return: Number of letters read and printed.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd, t, w;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);

t = read(fd, buf, letters);
if (t == -1)
{
free(buf);
close(fd);
return (0);
}

w = write(STDOUT_FILENO, buf, t);
if (w == -1 || w != t)
{
free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);
return (w);
}
