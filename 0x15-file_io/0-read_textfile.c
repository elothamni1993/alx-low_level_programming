#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t read_bytes, write_bytes;
    char *buffer;

    if (!filename)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (!buffer)
    {
        close(fd);
        return (0);
    }

    read_bytes = read(fd, buffer, letters);
    if (read_bytes == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
    if (write_bytes == -1 || write_bytes != read_bytes)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    free(buffer);
    close(fd);
    return (write_bytes);
}

