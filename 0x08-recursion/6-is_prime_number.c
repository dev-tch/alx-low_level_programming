/**
 * is_prime_number - check prime number
 * @n: number
 * Return: number
 */
int is_prime_number(int n)
{
int i;
for (i = 2 ; i * i <= n ; i++)
{
if (n % i != 0)
return (0);
}
return (1);
}
