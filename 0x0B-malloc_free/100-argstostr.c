#include <stddef.h>
#include <stdlib.h>
/**
* concat_str - concat two strings
*@s1: string1
*@s2: string2
*Return: pointer to newly allocated string
*/
char *concat_str(char *s1, char *s2)
{
char *str_res;
char *bkp1, *bkp2;
int i = 0, len1 = 0, len2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
bkp1 = s1;
bkp2 = s2;
while (*s1)
{
len1++;
s1++;
}
while (*s2)
{
len2++;
s2++;
}
str_res = (char *) malloc((len1 + len2 + 1) * sizeof(char));
if (str_res == NULL)
return (NULL);
while (i < len1)
{
str_res[i] = bkp1[i];
i++;
}
while (i < (len1 + len2))
{
str_res[i] = bkp2[i - len1];
i++;
}

str_res[len1 + len2] = '\0';
return (str_res);
}
/**
*copy_str - new pointer to copied string
*@str: string
*Return: pointer to string
*/
char *copy_str(char *str)
{
char *cpy = NULL;
char *bkp = str;
int len = 0, i;
if (str == NULL)
return (NULL);
/*get the length*/
while (*str)
{
len++;
str++;
}
/* memory allocation*/
cpy = (char *) malloc((len + 1) * sizeof(char));
if (cpy == NULL)
return (NULL);
for (i = 0 ; i < len ; i++)
{
cpy[i] = bkp[i];
}
return (cpy);
}
/**
*argstostr - concatenate all arguments of program
* @ac:number of arguments
* @av: pointer to all arguments
*Return: pointer to concatenated string
*/
char *argstostr(int ac, char **av)
{
int i;
char *s = NULL;
if (ac == 0 || av == NULL)
return (NULL);
s = copy_str(av[0]);
s = concat_str(s, "\n");
for (i = 1 ; i < ac ; i++)
{
s = concat_str(s, av[i]);
s = concat_str(s, "\n");
}
return (s);
}
