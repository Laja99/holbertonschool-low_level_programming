#include "main.h"
/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of the file to read
* @letters: number of letters to read and print
* Return: actual number of letters read and printed, or 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t xread, xwrite;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	xread = read(fd, buffer, letters);
	if (xread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	xwrite = write(STDOUT_FILENO, buffer, xread);
	if (xwrite == -1 || xwrite != xread)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (xwrite);
}

