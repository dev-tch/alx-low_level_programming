#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include  <stdlib.h>
#define TEMPO_SIZE 1024
static ssize_t get_text(char *filename, char **buffer, int file_des);
static void copy_text(char *filename, int file_des, char *buffer, int len);
void my_memset(char *buffer, int len_buf);
/**
* main - entry point
* @argc: number of arguments
* @argv:array of arguments
* Return: (0 ==> ok)  (exit code ==> ko)
*/
int main(int argc, char *argv[])
{
char *buffer;
int fd1, fd2, len_read, err_close;
char *file_from, *file_to;
buffer = NULL;
fd1 = fd2 = err_close = 0;
len_read = 1;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = argv[1];
file_to   = argv[2];
fd1 = open(file_from, O_RDONLY);
fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
while (len_read)
{
len_read = get_text(file_from, &buffer, fd1);
if (!len_read)
break;
copy_text(file_to, fd2, buffer, len_read);
}
free(buffer);
err_close = close(fd1);
if (err_close < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
exit(100);
}
err_close = close(fd2);
if (err_close  <  0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
exit(100);
}
return (0);
}
/**
* get_text - read from file and save it to buffer
* @filename: file to read
* @buffer: buffer to save text
* @file_des: file descriptor
* Return: number of reading
*/
static ssize_t get_text(char *filename, char **buffer, int file_des)
{
int len_read;
if (file_des < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
if (!(*buffer))
*buffer = malloc(sizeof(char) * TEMPO_SIZE);
if (!(*buffer))
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
else
{
/*clean the buffer befor read*/
my_memset(*buffer, TEMPO_SIZE);
}
len_read = read(file_des, *buffer, TEMPO_SIZE);
if (len_read  < 0)
{
free(*buffer);
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
return (len_read);
}
/**
* copy_text - copy text to other file dest
* @filename: file that receives text
* @file_des: file descriptor
* @buffer: buffer contains text
* @len: len of text to write in file dest
* Return: void
*/
static void copy_text(char *filename, int file_des, char *buffer, int len)
{
if (file_des < 0 || !buffer)
{
free(buffer);
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
if (write(file_des, buffer, len) < 0)
{
free(buffer);
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
}
/**
* my_memset - set buffer with '\0'
* @buffer: my buffer
* @len_buf: size of buffer
* Return: void
*/
void my_memset(char *buffer, int len_buf)
{
int i;
for (i = 0; i < len_buf; i++)
{
*buffer = '\0';
buffer++;
}
}
