#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
* create_file - function creates a file and writes a string to it.
* @filename: The name of the file to create.
* @text_content: The string to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t len = 0;

if (!filename)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

if (text_content)
for (; text_content[len]; len++)
;

if (write(fd, text_content, len) == -1)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
