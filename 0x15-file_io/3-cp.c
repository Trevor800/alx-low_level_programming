#include "main.h"
/**
 * main - function that copies contents of a file
 * @argc: Argument counter
 * @argv: Argument size
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int src, final, rd_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
src = open(argv[1], O_RDONLY);
if (src == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
final = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664); /*rw-rw-r--*/

while ((rd_bytes = read(src, buffer, BUFFER_SIZE)) > 0)
{
	if (final == -1 || write(final, buffer, rd_bytes) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
if ((close(src)) == -1 || (close(final)) == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
	exit(100);
}
return (0);
}
