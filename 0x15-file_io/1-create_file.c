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
	int newFile;
	int wr;

	if (filename == NULL)
		return (-1);

	newFile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (text_content != NULL)
	{
		int len = 0;

		while (text_content[len])
		{
			len++;
		}
		wr = write(len, text_content, newFile);
	}

	if (newFile == -1 || wr == -1)
	{
		close(newFile);
		return (-1);
	}
	close(newFile);
	return (1);
}
