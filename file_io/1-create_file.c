#include "main.h"
#include <unistd.h>
/**
 * create_file -  creates a file.
 *@text_content: content of char
 *@filename:name of file content
 * Return: 1 if success or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
int fp, j, a = 0;
if (filename == NULL)
{
return (-1);
}
fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fp == -1)
{
return (-1);
}
if (text_content == NULL)
{
text_content = '\0';
}
while (text_content[a])
a++;
j = write(fp, text_content, a);
if (j == -1)
{
return (-1);
}
close(fp);
return (1);
}
