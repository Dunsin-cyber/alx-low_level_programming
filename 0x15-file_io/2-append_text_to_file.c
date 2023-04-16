#include "main.h"

/**
 * _str_length - find length of string
 * @str: string
 * Return: length
 */
int _str_length(char *str)
{
    int len;

    for (len = 0; str[len] != '\0'; len++)
        ;

    return (len);
}

/**
 * append_text_to_file - append text to an existing file
 * @filename: name of the file
 * @text_content: content to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int file_desc;
    int n_written;

    if (!filename)
        return (-1);

    /* open file in append mode if it exists */
    file_desc = open(filename, O_WRONLY | O_APPEND);
    if (file_desc == -1)
        return (-1);

    /* if no text content to append, still successful */
    if (!text_content)
    {
        close(file_desc);
        return (1);
    }

    /* write to the end of the file */
    n_written = write(file_desc, text_content, _str_length(text_content));
    if (n_written == -1 || n_written != _str_length(text_content))
    {
        close(file_desc);
        return (-1);
    }

    close(file_desc);
    return (1);
}
