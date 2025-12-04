#include "main.h"

/**
 * close_files - close file descriptors and return error code
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @error_code: error code to return on success
 *
 * Return: error_code on success, or 100+fd on close failure
 */
static int close_files(int fd_from, int fd_to, int error_code)
{
	if (close(fd_from) == -1)
		return (100 + fd_from);
	if (close(fd_to) == -1)
		return (100 + fd_to);
	return (error_code);
}

/**
 * write_chunk - write a buffer to file descriptor
 * @fd_to: destination file descriptor
 * @buf: buffer to write
 * @len: number of bytes to write
 *
 * Return: 0 on success, -1 on write failure
 */
static int write_chunk(int fd_to, const char *buf, ssize_t len)
{
	ssize_t total = 0, w_bytes;

	while (total < len)
	{
		w_bytes = write(fd_to, buf + total, len - total);
		if (w_bytes == -1)
			return (-1);
		total += w_bytes;
	}
	return (0);
}

/**
 * cp - copy contents from file_from to file_to
 * @file_from: source filename
 * @file_to: destination filename
 *
 * Return:
 *   0   on success
 *   98  if can't read from file_from
 *   99  if can't write to file_to
 *  >=100 encoded close error as 100 + fd_value
 */
int cp(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t r_bytes;
	char buffer[1024];

	if (file_from == NULL || file_to == NULL)
		return (98);

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		return (98);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		return (close_files(fd_from, -1, 99));

	while ((r_bytes = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (write_chunk(fd_to, buffer, r_bytes) == -1)
			return (close_files(fd_from, fd_to, 99));
	}

	if (r_bytes == -1)
		return (close_files(fd_from, fd_to, 98));

	return (close_files(fd_from, fd_to, 0));
}
/**
 * main - entry point for cp program
 * @argc: argument count
 * @argv: argument vector
 *
 * All error messages and exit codes are handled here.
 *
 * Return: 0 on success, exits with 97/98/99/100 on error
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	res = cp(argv[1], argv[2]);
	if (res == 0)
		return (0);
	if (res == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (res == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", res - 100);
	exit(100);
}
