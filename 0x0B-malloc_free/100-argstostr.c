#include <stddef.h>
#include <stdlib.h>
/**
* get_len - recursive functuion to return len of string
* @str: string
* Return: int
*/
int get_len(char *str)
{
if (*str == '\0')
return (0);
return (1 + get_len(str + 1));
}
/**
*argstostr - concatenate all arguments of program
* @ac:number of arguments
* @av: pointer to all arguments
*Return: pointer to concatenated string
*/
char *argstostr(int ac, char **av)
{
int i = 0, j = 0, k = 0, total_length = 0;
char *s = NULL;
if (ac == 0 || av == NULL)
return (NULL);
/*memory allocation*/
for (i = 0; i < ac; i++)
total_length += get_len(av[i]) + 1;
s = malloc(sizeof(char) * (total_length + 1));
for (i = 0 ; i < ac ; i++)
{
j = 0;
while (av[i][j] != '\0')
{
s[k] = av[i][j];
k++;
j++;
}
s[k] = '\n';
k++;
}
s[k] = '\0';
return (s);
}
