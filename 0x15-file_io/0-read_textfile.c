#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to STDOUT.
 * @filename: file being read.
 * @letters: total letters to read.
 * Return: the number of bytes read and printed,
 *         0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buf;
	ssize_t t, w;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		fclose(file);
		return (0);
	}

	t = fread(buf, sizeof(char), letters, file);
	w = fwrite(buf, sizeof(char), t, stdout);

	free(buf);
	fclose(file);

	return (w);
}
