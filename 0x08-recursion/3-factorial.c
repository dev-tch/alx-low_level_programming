/**
 *factorial - calculate factorial of number
 *@n: number
 *Return: result factorial
 */
int factorial(int n)
{
if (n == 0)
return (1);
return (factorial(n) * factorial(n - 1));
}
