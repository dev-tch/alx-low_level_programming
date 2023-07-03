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
 * _strspn - gets the length of a prefix substring
 *@s: string
 *@accept: string
 *Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len_total = 0, i = 0;
char *save_accept  = accept;
char *f;
while (*s)
{
f = _strchr(accept, s[i]);
accept = save_accept;
if (f != NULL)
{
len_total++;
}
else
break;
s++;
}
/*end while *s*/
return (len_total);
}
