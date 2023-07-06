
/**
* sqrtlook - helper function
* @min: low
* @max: hight
* Return: int
*/
int sqrtlook(int min, int max)
{
int square;
square = min * min;
if (square == max)
return (min);
else if (square < max)
return (sqrtlook(min + 1, max));
else
return (-1);
}
/**
 * _sqrt_recursion - get square root
 * @n: number
 * Return: square
 */
int _sqrt_recursion(int n)
{
return (sqrtlook(1, n));
}
