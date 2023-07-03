#include <stddef.h>
/**
*_strchr - search first occurence of c character in string s
*@s: string
*@c: char to search
*Return: pointer to first occurence
*/

char *_strchr(char *s, char c)
{
char *res = NULL;
while (*s)
{
if (*s == c)
return (s);
else if (*(s + 1) == c)
return (s + 1);
s++;
}
return (res);
}
