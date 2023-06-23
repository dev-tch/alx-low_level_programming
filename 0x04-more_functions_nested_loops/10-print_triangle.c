#include "main.h"
/**
 * print_triangle - draw triangle in console
 *@size : int
 * Return: void
 */

void print_triangle(int size)
{
int nbspaces, nbhashes, line, i;
if (size <= 0)
{
_putchar('\n');
} /* if size <=0*/
/*deb loop for lines */
for (line = 1 ; line <= size ; line++)
{
nbspaces = size - line;
nbhashes = line;
/*each line we need 2loop:  one for  spaces other  loop for # */
while (nbspaces > 0)
{
_putchar(32);
nbspaces--;
} /*while for draw spaces */
for (i = 0 ; i < nbhashes ; i++)
{
_putchar('#');
}
_putchar('\n');
}
/*end loop for lines */
}

