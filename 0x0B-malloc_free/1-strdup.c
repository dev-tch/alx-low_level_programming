#include <stddef.h>
#include <stdlib.h>
/**
*_strdup - new pointer to copied string
*@str: string
*Return: pointer to string
*/
char *_strdup(char *str)
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
cpy = (char *) malloc(len *sizeof(char));
if (cpy == NULL)
return (NULL);
for (i = 0 ; i < len ; i++)
{
cpy[i] = bkp[i];
}
return (cpy);
}

