#include "main.h"

/**
 * exit_error - prints error messages and exits with exit value
 * @err_code: exit value
 * @filename: filename
 * @fd: file descriptor
 * Return: void
 **/
void exit_error(int err_code, char *filename, int fd)
{
    switch (err_code)
    {
    case 97:
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(err_code);
    case 98:
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
        exit(err_code);
    case 99:
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
        exit(err_code);
    case 100:
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(err_code);
    default:
        return;
    }
}

/**
 * main - copies one file to another
 * @argc: should be 3 (./a.out copyfromfile copytofile)
 * @argv: first is file to copy from (fd_src), second is file to copy to (fd_dest)
 * Return: 0 (success), 97-100 (exit value errors)
 */
int main(int argc, char *argv[])
{
    int fd_src, fd_dest, read_count, write_count;
    char buffer[1024];

    if (argc != 3)
        exit_error(97, NULL, 0);

    /* open source file descriptor */
    fd_src = open(argv[1], O_RDONLY);
    if (fd_src == -1)
        exit_error(98, argv[1], 0);

    /* create/overwrite destination file descriptor */
    fd_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_dest == -1)
        exit_error(99, argv[2], 0);

    /* read source file and write to destination */
    while ((read_count = read(fd_src, buffer, 1024)) > 0)
    {
        write_count = write(fd_dest, buffer, read_count);
        if (write_count == -1)
            exit_error(99, argv[2], 0);
    }

    /* handle errors for read() and write() */
    if (read_count == -1)
        exit_error(98, argv[1], 0);

    /* close file descriptors */
    if (close(fd_src) == -1)
        exit_error(100, NULL, fd_src);
    if (close(fd_dest) == -1)
        exit_error(100, NULL, fd_dest);

    return (0);
}
