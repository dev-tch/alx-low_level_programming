/**
 * _memcpy - copy memory area
 *@dest: string after copying
 *@src: string to copy
 *@n: number of chars to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
char *res = dest;
for (i = 0 ; i < n ; i++)
{
*dest = src[i];
dest++;
}
/*dest--;*/
return (res);
}
