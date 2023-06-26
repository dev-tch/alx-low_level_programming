#include "main.h"
/**
 * swap_int - swaps the values of two variables
 *@a: pointer to int
 *@b: pointer to int
 * Return: void
 */

void swap_int(int *a, int *b)
{
int inter = *a;
*a = *b;
*b = inter;
}
