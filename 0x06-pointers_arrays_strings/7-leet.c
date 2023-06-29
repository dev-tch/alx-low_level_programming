/**
 *leet- encode string into 1337
 *@str: string to encode
 * Return: string encoded
 */
char *leet(char *str)
{
char *res  = str;
char *code = "AEOTL";
char *tocode   = "43071";
while (*str)
{
while (*code)
{
if (*str == *code || *str == (*code + 32))
*str    =  *tocode;
code    = code + 1;
tocode  = tocode + 1;
}
code = code - 5;
tocode = tocode - 5;
str = str + 1;
}
return (res);
}
