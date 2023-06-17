#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, k;
int code = 55;
int cpt  = 0;
for (i = 48 ; i < 58 ; i++)
{
for (j = i + 1  ; j < 58 ; j++)

{
for (k = j + 1  ; k < 58 ; k++)
{
if (k == 57 && j == 56 && i == 55)
continue;
else
{
putchar(i);
putchar(j);
putchar(k);
putchar(44);
putchar(32);
}
} /*loop k*/
} /*loop j */
} /*loop i */
while (cpt < 4)
{
if (cpt == 3)
{
code = 10;
}
putchar(code);
code++;
cpt++;
}
return (0);
}
