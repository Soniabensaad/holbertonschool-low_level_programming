#include "main.h"
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX
 *@filename: a file text
 *@letters: size of char
 * Return: number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int i, j;
    char *buffer;
    buffer = malloc(sizeof(char *) * letters);
    if (buffer == NULL)
    {
        return (0);
    }
    i = open(filename, O_RDONLY);
    if (i == -1)
    {
        return (0);
    }
    j = read(i, buffer, letters);
    write(STDOUT_FILENO, buffer, j);
    free(buffer);
    close(i);
    return (j);
}
