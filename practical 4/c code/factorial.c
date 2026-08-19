#include <stdio.h>
#include <time.h>


long long factorial_iterative(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

long long factorial_recursive(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial_recursive(n - 1);
}

int main()
{
    int n;
    clock_t start, end;
    double time_iterative, time_recursive;

    printf("Enter a number: ");
    scanf("%d", &n);

   
    start = clock();
    long long result1 = factorial_iterative(n);
    end = clock();

    time_iterative = (double)(end - start) / CLOCKS_PER_SEC;

   
    start = clock();
    long long result2 = factorial_recursive(n);
    end = clock();

    time_recursive = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nIterative Factorial = %lld", result1);
    printf("\nRecursive Factorial = %lld", result2);

    printf("\n\nTime taken by Iterative Method = %f seconds", time_iterative);
    printf("\nTime taken by Recursive Method = %f seconds", time_recursive);

    return 0;
}