#include "main.h"
int cp(const char *file_from, const char *file_to)
{
    int fd_from, fd_to, r_bytes, w_bytes;
    char buffer[1024];

    if (file_from == NULL || file_to == NULL)
        return (-1);
    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
        return (-1);
    fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        close(fd_from);
        return (-1);
    }
    while ((r_bytes = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        w_bytes = write(fd_to, buffer, r_bytes);
        if (w_bytes == -1 || w_bytes != r_bytes)
        {
            close(fd_from);
            close(fd_to);
            return (-1);
        }
    }
    if (r_bytes == -1)
    {
        close(fd_from);
        close(fd_to);
        return (-1);
    }
    close(fd_from);
    close(fd_to);
    return (0);
}
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        return (97);
    }
    if (cp(argv[1], argv[2]) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't copy from %s to %s\n", argv[1], argv[2]);
        return (98);
    }
    return (0);
}