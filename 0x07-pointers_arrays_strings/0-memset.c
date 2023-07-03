/**
 * _memset - fill buffer with same character
 *@s: buffer to fill
 *@b: character used for filling buffer
 *@n: size of buffer
 *Return: buffer filled
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
s[i] = b;
}
return (s);
}
