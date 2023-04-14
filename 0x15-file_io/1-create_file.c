#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: function name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int wr;
	int newFile;

	if (filename == 0)
		return (-1);

	newFile = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (text_content != NULL)
	{
		int len = 0;

		while (text_content[len])
		{
			len++;
		}
		wr = write(newFile, text_content, len);
	}

	if (wr == -1 || newFile == -1)
	{
		close(newFile);
		return (-1);
	}
	close(newFile);
	return (1);
}
