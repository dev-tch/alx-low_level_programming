#include <stdlib.h>
#include <stddef.h>
/**
* get_len - return len of string
* @str: string
* Return: int
*/
int get_len(char *str)
{
if (*str == '\0')
return (0);
return (1 + get_len(str + 1));
}

/**
* string_nconcat - concatenates two strings
*@s1: string1
*@s2: string2
*@n: n bytes of string2
*Return: pointer to concatenad string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr  = NULL;
char *bkp1 = s1;
char *bkp2 = s2;
char *bkp3 = NULL;
unsigned int size_s1 = 0;
unsigned int size_s2 = 0;
unsigned int i       = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
size_s1 = get_len(bkp1);
size_s2 = get_len(bkp2);
if (n >= size_s2)
n = size_s2;
ptr = (char *) malloc((size_s1 + n + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);
bkp3 = ptr;
while (*s1)
{
*ptr = *s1;
ptr++;
s1++;
}
while (i < n  &&  *s2)
{
*ptr = *s2;
ptr++;
s2++;
i++;
}
*ptr = '\0';

return (bkp3);
}
