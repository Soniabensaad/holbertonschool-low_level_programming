#include "main.h"
#include <unistd.h>
/**
 * append_text_to_file -  appends text at the end of a file
 *@text_content: content of char
 *@filename:name of file content
 * Return: 1 if success or -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int ptr, i = 0, j;
    if (filename == NULL)
    {
        return (-1);
    }
    ptr = open(filename, O_WRONLY | O_APPEND);
    if (ptr == -1)
    {
        return (-1);
    }
    if (text_content)
    {
        while (text_content[i] != '\0')
        {
            i++;
        }
        j = write(ptr, text_content, i);
        if (j == -1)
        {
            return (-1);
        }
    }
    close(ptr);
    return (1);
}
