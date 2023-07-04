#include <stdio.h>
/**
 * print_diagsums - sum of two diagonal square matrix
 * @a:matrix
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int sum_diag1 = 0, sum_diag2 = 0, i;
for (i = 0 ; i < size ; i++)
{
sum_diag1 = sum_diag1 + *(a + (i * size + i));
sum_diag2 = sum_diag2 + *(a + (i * size + (size - 1 - i)));
}
printf("%d, %d\n", sum_diag1, sum_diag2);
}
