/**
 * cap_string - capitalize all words of string
 * @str : string
 * Return: string converted
 */
char *cap_string(char *str)
{
int len  = 0;
int sep = 0;
char *res = str;
while (*str)
{
if (*str == ',' || *str == ';' || *str == '.' || *str ==  '!' || *str == '?')
sep = 1;
else if (*str == '(' || *str == ')' || *str == '{')
sep = 1;
else if (*str == '}' || *str == '\n')
sep = 1;
else if (*str == '\t')
sep = 1;
else if (*str == ' ')
sep = 1;
else
sep = 0;
if (sep == 1)
{
if (*(str - len) >= 'a' && *(str - len) <= 'z')
*(str - len) = *(str - len) - 32;
if (*(str + 1) >= 'a' && *(str + 1) <= 'z')
*(str + 1) = *(str + 1) - 32;
len = 0;
}
str++;
len++;
}
return (res);
}
