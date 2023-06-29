/**
 * reverse_array - reveerse elements of an array
 *@a: array*
 *@n: size of an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int bkp;
int i;
for (i = 0 ; i < n / 2 ; i++)
{
bkp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = bkp;
}
}
