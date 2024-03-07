#include <stdio.h>
int main()
{
    long long n;
    long long f = 1;
    printf("Enter a non-negative integer: ");
    scanf("%lld", &n);
    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            f *= i;
        }
        printf("Factorial of %lld = %lld\n", n, f);
    }
    return 0;
}
