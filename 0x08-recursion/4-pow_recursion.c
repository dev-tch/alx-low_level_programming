/**
 * _pow_recursion - calculate power
 *@x: number
 *@y: power
 *Return: result power
 */
int _pow_recursion(int x, int y)
{
if (y >= 0)
{
if(y == 0)
return (1);
else
return (x * _pow_recursion(x , y - 1));
}
else
return (-1);
}
