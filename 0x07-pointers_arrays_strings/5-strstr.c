#include <stddef.h>
/**
 * _strstr -  finds the first occurrence of the substring
 *@haystack: string
 *@needle: string
 *Return:pointer to the located substring
 */
char *_strstr(char *haystack, char *needle)
{
char *hstk = haystack;
int match, i;
while (*haystack)
{
hstk  = haystack;
match = 1;
for (i = 0 ; (needle[i] != '\0' && *haystack != '\0') ; i++)
{
if (*haystack != needle[i])
{
match = 0;
break;
}
haystack++;
}
/*end for*/
if (match == 1)
{
return (hstk);
}
if (*haystack == '\0')
break;
else
haystack++;
}
/*end while*/
return (NULL);
}
