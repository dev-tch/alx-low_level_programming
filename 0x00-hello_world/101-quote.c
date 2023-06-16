#include <unistd.h>
#include <sys/syscall.h>
#include <string.h>
#define STDERR_FILENO 2
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
char str1[] = "and that piece of art is ";
char str2[] = "useful\" - Dora Korpar, 2015-10-19\n";
strcat(str1, str2);
syscall(SYS_write, STDERR_FILENO, str1, strlen(str1));
return (1);
}
