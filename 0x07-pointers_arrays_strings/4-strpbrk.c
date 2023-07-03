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
/**
*_strpbrk - locates the first occurrence in the string s
* @s:string
*@accept: string
*Return:  pointer to the byte in s
*/
char *_strpbrk(char *s, char *accept)
{
char *save_accept  = accept;
char *f;
while (*s)
{
f = _strchr(accept, *s);
accept = save_accept;
if (f != NULL)
return (s);
s++;
}
f = _strchr(accept, *s);
accept = save_accept;
if (f != NULL)
return (s);

return (NULL);
}
