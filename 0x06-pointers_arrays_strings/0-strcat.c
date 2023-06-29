/**
 * _strcat - concatenate two strings
 *@dest: pointer to char
 *@src: pointer to char
 * Return: pointer to char
 */
char *_strcat(char *dest, char *src)
{
char *res = dest;
while (*dest)
{
dest++;
}
while (*src)
{
*dest = *src;
dest++;
src++;
}
return (res);
}
