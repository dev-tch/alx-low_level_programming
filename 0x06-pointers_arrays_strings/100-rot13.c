/**
 * rot13 - encription string to ROT13
 * @str: string to encrypt
 * Return: string encrypted
 */
char *rot13(char *str)
{
int i = 0;
char *res = str;
while (str[i] != '\0')
{
char c = str[i];
char base = (c >= 'a' && c <= 'z') ? 'a' : (c >= 'A' && c <= 'Z') ? 'A' : '\0';
if (base != '\0')
{
c = (c - base + 13) % 26 + base;
str[i] = c;
}
i++;
}
return (res);
}
