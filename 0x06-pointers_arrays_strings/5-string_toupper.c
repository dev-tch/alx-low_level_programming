/**
 * string_toupper - convert lower case to upper case
 *@str : string to convert
 * Return: void
 */

char *string_toupper(char *str)
{
char *res = str;
while (*str)
{
if (*str >= 'a' && *str <= 'z')
*str = *str - 32;
str++;
}
return (res);
}
