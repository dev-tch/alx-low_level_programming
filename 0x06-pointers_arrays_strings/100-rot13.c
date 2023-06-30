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
if (c >= 'a' && c <= 'z')
{
c = 'a' + ((c - 'a' + 13) % 26);
}
else if (c >= 'A' && c <= 'Z')
{
c = 'A' + ((c - 'A' + 13) % 26);
}

str[i] = c;
}
i++;
}
return (res);
}
