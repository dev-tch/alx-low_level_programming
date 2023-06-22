#include "main.h"

/**
 * print_square - draw square in console
 * @size: int
 * Return: void
 */
void print_square(int size)
{int i;
int lines = 0;
if (size <= 0)
_putchar('\n');
else
{
while (lines < size)
{
for (i = 0 ; i < size; i++)
{
_putchar('#');

} /*end loop i*/
_putchar('\n');
lines++;
} /*end while*/
} /*end else*/
}
