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
* create_file - create file with text_content
* @text_content: the text to write it to file
* @filename: the name of file
* Return: (1 - ok) (-1 : ko)
*/
int create_file(const char *filename, char *text_content)
{
int file_des, ret_write, len, ret_close;
file_des = ret_write = len = ret_close = 0;
if (!filename)
return (-1);
file_des = open(filename, O_CREAT  |  O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (file_des < 0)
return (-1);
len = _strlen(text_content);
if (len > 0)
{
ret_write = write(file_des, text_content, len);
if (ret_write <= 0)
return (-1);
}
ret_close = close(file_des);
if (ret_close < 0)
return (-1);
return (1);
}
