/**
 * infinite_add - add infinity
 *@n1: first number
 *@n2: second number
 *@r: result addition
 *@size_r:  size buffer to save result
 *Return: result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, i = 0, div = 0, rem;
char val  = '0';
while (*n1)
{
len1++;
n1++;
}
n1--;
while (*n2)
{
len2++;
n2++;
}
n2--;
while (i < size_r)
{ r++;
*r = 'z';
i++;
}
*r = '\0';
r--;
while (len1 >= 0   || len2 >= 0)
{ val = '0';
if (size_r == 1)
return (0);
rem = ((*n1 - '0')  + (*n2 - '0') + div) % 10;
*r  =   rem + '0';
size_r--;
div = ((*n1 - '0') + (*n2 - '0') + div) / 10;
len1--;
len2--;
n1 = ((len1 <= 0) ?  &val : n1 - 1);
n2 = ((len2 <= 0) ? &val : n2 - 1);
if (size_r  > 1)
r--;
}
while (*r == 'z')
r++;
return (r);
}
