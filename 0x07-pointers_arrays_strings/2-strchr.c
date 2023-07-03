/**
*_strchr - search first occurence of c character in string s
*@s: string
*@c: char to search
*Return: pointer to first occurence
*/

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
return (s);
}
