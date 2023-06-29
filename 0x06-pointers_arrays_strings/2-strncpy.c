/**
 * _strncpy - copy src to dest
 * @dest: pointer to char
 * @src: pointer to char
 *@n: int
 * Return: pointer to char
 */
char *_strncpy(char *dest, char *src, int n)
{
int end_src = 0;
int cpt = 0;
char *res = dest;
while (cpt < n)
{
if (*src == '\0')
end_src = 1;
if (end_src == 1)
*dest = '\0';
else
*dest = *src;
dest++;
if (end_src == 0)
src++;
cpt++;
}
return (res);
}
