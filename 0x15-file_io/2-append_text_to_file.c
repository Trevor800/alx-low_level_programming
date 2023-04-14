#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int newFile, len = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);
	newFile = open(filename, O_WRONLY | O_APPEND);
	if (newFile == -1)
	return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		wr = write(len, text_content, newFile);
		if (wr != len)
		{
			close(newFile);
			return (-1);
		}
	}
	close(newFile);
	return (1);
}
