#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add to the end of the file.
 * Return: If the function fails or filename is NULL - -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    size_t len = 0;
    ssize_t xwrite;

    if (filename == NULL)
        return (-1);
    if (text_content != NULL && text_content[0] != '\0')
    {
        while (text_content[len])
            len++;
    }
    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);
    xwrite = write(fd, text_content, len);
    if (xwrite == -1 || xwrite != len)
    {
        close(fd);
        return (-1);
    }
    close(fd);
    return (1);
}