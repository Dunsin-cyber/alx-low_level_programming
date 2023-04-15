#include "main.h"

/**
 * read_textfile - reads a certain number of characters from a file and prints them to stdout
 * @filename: name of the file to read from
 * @letters: number of characters to read and print
 * Return: the actual number of characters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int file_descriptor;
    ssize_t num_read = 0, num_written = 0;
    char *buffer;

    if (filename == NULL)
        return (0);

    /* Allocate memory for the buffer */
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return (0);

    /* Open the file and read from it */
    file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor != -1)
    {
        num_read = read(file_descriptor, buffer, letters);
        if (num_read != -1)
        {
            /* Write to stdout */
            num_written = write(STDOUT_FILENO, buffer, num_read);
        }
        close(file_descriptor);
    }

    /* Clean up and return the actual number of characters read and printed */
    free(buffer);
    if (num_read == -1 || num_written == -1)
        return (0);
    else
        return (num_read);
}
