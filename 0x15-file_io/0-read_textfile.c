#include "main.h"
/**
* read_textfile - read text from file and print it in terminal
* @letters: numbers of characters to read
* @filename: the name of file to read from it
* Return: (-1 echec ) (n : number of written letters)
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *msg;
ssize_t  nb_reads, ret, ret_close, file_des;
if (!filename || !letters)
return (0);
file_des = open(filename, O_RDONLY);
if (file_des < 0)
{
return (0);
}
msg = (char *) malloc(letters);
if (!msg)
return (0);
nb_reads = read(file_des, msg, letters);
if (nb_reads <  0)
{
free(msg);
return (0);
}
msg[letters] = '\0';

ret = write(STDOUT_FILENO, msg, nb_reads);
if (ret <= 0)
{
free(msg);
return (0);
}
/*clean up memory */
free(msg);
ret_close = close(file_des);
if (ret_close == -1)
return (0);
return (nb_reads);
}
