/**
 * rot13 - encription string to ROT13
 * @str: string to encrypt
 * Return: string encrypted
 */
char *rot13(char *str)
{
int i = 0;
int j = 0;
char bases[] = {'a', 'z', 'A', 'Z'};
char *res = str;
while (str[i] != '\0')
{
char c = str[i];
while (j < 4)
{
if (c >= bases[j]  && c <= bases[j + 1])
{
c = bases[j] + ((c - bases[j] + 13) % 26);
break;
}
j = j + 2;
}
str[i] = c;
i++;
j = 0;
}
return (res);
}
