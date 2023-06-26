/**
 * _strcpy - copy str source to str dest
 *@src: pointer to char
 *@dest: pointer to char
 * Return: pointer to char
 */

char *_strcpy(char *dest, char *src)
{
char *bkp = src;
while (*src)
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (bkp);
}
