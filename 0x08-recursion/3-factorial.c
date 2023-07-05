/**
 *factorial - calculate factorial of number
 *@n: number
 *Return: result factorial
 */
int factorial(int n)
{
if (n >= 0)
{
if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
else
{
return (-1);
}
}
