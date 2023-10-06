#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads and prints text from file
 * @filename: the name of filename
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed.
 * if an error, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_bytes = 0;
	ssize_t written_bytes = 0;
	char *buffer = NULL;

	FILE *file_ptr;

	if (filename == NULL)
		return (0);

	file_ptr = fopen(filename, "r");
	if (file_ptr == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file_ptr);
		return (0);
	}

	read_bytes = fread(buffer, sizeof(char), letters, file_ptr);
	if (read_bytes == 0)
	{
		fclose(file_ptr);
		free(buffer);
		return (0);
	}
	written_bytes = fwrite(buffer, sizeof(char), read_bytes, stdout);
	if (written_bytes != read_bytes)
	{
		fclose(file_ptr);
		free(buffer);
	}
	fclose(file_ptr);
	free(buffer);

	return (written_bytes);
}
