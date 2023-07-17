#include <stdio.h>
#include <string.h>
#include <stddef.h>
#define PATH __FILE__
/**
* main - entry point
* Return: int
*
*/
int main(void)
{
char *str = strrchr(PATH, '/');
if (str != NULL)
{
str++;
printf("%s\n", str);
}
else
printf("%s\n", PATH);
return (0);
}
