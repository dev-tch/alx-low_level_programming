#include <stddef.h>
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *@s: string
 *@accept: string
 *Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len_accept = 0, len_total;
char *save_accept = accept;
char *f;
while (*accept)
{
len_accept++;
}
/*end while*/
for (i = 0 ; i < len_accept ; i++)
{
f = _strchr(save_accept, s[i]);
if (f != NULL)
{
len_total++;
}
}
/*end for loop*/
return (len_total);
}
