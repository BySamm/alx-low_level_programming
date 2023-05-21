#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Text file print to STDOUT.
 * @filename: The file to read
 * @letters: Num of letters to read
 * Return: Num of letters || 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t wr;
	ssize_t rd;
	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	rd = read(file, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	free(buffer);
	close(file);
	return (wr);
}

