#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rd;
	ssize_t wr, newFile;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	newFile = open(filename, O_RDONLY);
	rd = read(newFile, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (rd == -1 || newFile == -1 || wr == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(newFile);

	return (wr);
}
