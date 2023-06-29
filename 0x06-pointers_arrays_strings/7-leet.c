/**
 *leet- encode string into 1337
 *@str: string to encode
 * Return: string encoded
 */
char *leet(char *str)
{
char *res  = str;
while (*str)
{
if (*str == 'a' || *str == 'A')
*str = '4';
else if (*str == 'e' || *str == 'E')
*str = '3';
else if (*str == 'o' || *str == 'O')
*str = '0';
else if (*str == 't' || *str == 'T')
*str = '7';
else if (*str == 'l' || *str == 'L')
*str = '1';
else
*str = *str;
str =  str + 1;
}
return (res);
}
