#include <stdio.h>
/**
 * find_largest_prime_factor - larger prime factor
 *@n: long
 * Return: long
 */

long find_largest_prime_factor(long n)
{
long MaxPrime = -2;
long i;
while (n % 2 == 0)
{
MaxPrime = 2;
n /= 2;
}

for (i = 3; i * i <= n; i += 2)
{
while (n % i == 0)
{
MaxPrime = i;
n /= i;
}
}
if (n > 2)
MaxPrime = n;
return (MaxPrime);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long n = 612852475143;
long res;
res = find_largest_prime_factor(n);
printf("%ld\n", res);
return (0);
}
