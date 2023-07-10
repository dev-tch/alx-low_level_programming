#include <stddef.h>
#include <stdlib.h>
/**
* str_concat - concat two strings
*@s1: string1
*@s2: string2
*Return: pointer to newly allocated string
*/
char *str_concat(char *s1, char *s2)
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
