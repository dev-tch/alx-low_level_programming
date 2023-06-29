/**
 * _strncat - concatenate two strings
 *@dest: pointer to char
 *@src: pointer to char
 *@n: int
 * Return: pointer to char
 */
char *_strncat(char *dest, char *src, int n)
{
char *res = dest;
int cpt = 0;
while (*dest)
{
dest++;
}
while (*src && cpt < n)
{
*dest = *src;
dest++;
src++;
cpt++;
}
return (res);
}

