#include "main.h"
/**
 * print_chessboard - draw chess board
 *@a: multi dimentional array
 *Retur: void
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0 ; i < 8 ; i++)
{
for (j = 0 ; j < 8 ; j++)
{
_putchar(a[i][j]);
} /*loop j*/
_putchar('\n');
} /*loop i*/
}
