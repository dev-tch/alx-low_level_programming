#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int  cpt, units, tens;
int cpt2, units2, tens2;
cpt = 0;
while (cpt < 100)
{
units = cpt % 10;
tens = cpt / 10;
cpt2 = cpt + 1;
while (cpt2 < 100)
{
putchar(tens  + 48);
putchar(units + 48);
putchar(32);
units2    = cpt2 % 10;
tens2     = cpt2 / 10;
putchar(tens2  + 48);
putchar(units2 + 48);
if (cpt == 98 && cpt2 == 99)
putchar('\n');
else
{
putchar(44);
putchar(32);
}
cpt2++;
} /*end second while loop*/
cpt++;
} /*end first  while loop */
return (0);
}
