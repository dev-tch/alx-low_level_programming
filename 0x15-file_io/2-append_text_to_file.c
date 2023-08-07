#include "main.h"
/**
* _strlen - get length of string
* @str: string
* Return: length
*/
int _strlen(char *str)
{
if (*str == '\0')
return (0);
return (1 + _strlen(str + 1));
}
/**
* append_text_to_file - append text to end of file
* @text_content: text to append to file
* @filename: name of the file
* Return: (1 ==> ok) (-1 ==> ko)
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len, ret_wr, ret_close;
fd = len = ret_wr = ret_close = 0;
if (!filename)
return (-1);
if (!text_content || !text_content[0])
return (1);
fd = open(filename, O_WRONLY |  O_APPEND);
if (fd < 0)
return (-1);
len = _strlen(text_content);
ret_wr = write(fd, text_content, len);
if (ret_wr < 0)
return (-1);
ret_close = close(fd);
if (ret_close < 0)
return (-1);
return (1);
}
