#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t newFile;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		int newFile;

		while (text_content[newFile])
		{
			newFile++;
		}
		fd = write(newFile, text_content, newFile);
	}
	if (fd == -1 || newFile == -1)
	{
		close(newFile);
		return (-1);
	}
	close(newFile);
	return (1);
}
