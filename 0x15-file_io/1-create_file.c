#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
    int len;

    for (len = 0; str[len] != '\0'; len++)
        ;

    return (len);
}

/**
 * create_file - creates file with permissions rw------- and writes content in
 * if file already exists, don't change permissions and just truncate it
 * @filename: name to give to new file
 * @content: writes this content into file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *content)
{
    int fd;
    int bytes_written = 0;

    if (filename == NULL)
        return (-1);

    /* Create the file with permissions if it doesn't exist, else truncate */
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    /* If there is no content to write, just return 1 */
    if (content == NULL || _strlen(content) == 0)
    {
        close(fd);
        return (1);
    }

    /* Write the content to the file */
    bytes_written = write(fd, content, _strlen(content));
    if (bytes_written == -1 || bytes_written != _strlen(content))
    {
        close(fd);
        return (-1);
    }

    close(fd);
    return (1);
}
