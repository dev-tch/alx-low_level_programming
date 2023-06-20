#include "main.h"
/**
 * jack_bauer - print every minute from 00:00 to 23:59
 *
 * Return: void
 */


void jack_bauer(void)
{
/*hh:mm*/
int m, h;
int unit_h, tens_h;
int unit_m, tens_m;
for (h  = 0 ; h < 24 ; h++)
{
unit_h = h % 10;
tens_h = h / 10;
for (m = 0 ; m < 60 ; m++)
{
_putchar(tens_h + 48);
_putchar(unit_h + 48);
_putchar(':');
unit_m = m % 10;
tens_m = m / 10;
_putchar(tens_m + 48);
_putchar(unit_m + 48);
_putchar('\n');
} /*loop minute*/
} /*loop hour*/
}
