#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer- print the content of size bytes of the buffer pointed by b
 * @b: buffer to print
 * @size: size of bytes to print
 * Return: void
 */
void print_buffer(char *b, int size)
{
int i   = 0,j= 0,k = 0,pos = 0;
char ten_chars[10];
if (size == 0)
{
printf("\n");
return;
}
while ( i < size)
{
if ( j == 0)
printf ("%010x: ", pos);
if ( j < 10 )
{
if (isprint(b[i]) == 0 )
{
ten_chars[j]   = '.';
}
else
{
ten_chars[j]   = b[i];
}
/*printf("%x", b[i]);
if (i > 0 && i % 2 != 0)
putchar(32);*/
} 
if (j == 9)
{
j = 0;

for ( k = 0 ; k < 10 ; k++)
{
if (k % 2 == 0 )
printf("%x", ten_chars[k]);
else
printf("%x ", ten_chars[k]);
}
for (k = 0 ; k < 10 ; k++)
{ 
putchar(ten_chars[k]);
}
printf ("\n");
i++;
pos+=10;
continue ;
}
i++;
j++;
}
putchar('\n');
}

