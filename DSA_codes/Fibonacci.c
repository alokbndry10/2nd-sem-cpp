#include <stdio.h>

// Function to calculate the nth term of the Fibonacci sequence using recursion
int fibo(int n)
{
    if (n <= 1)
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    printf("\t\t========================\n");
    printf("\t\t  Fibonacci Calculator  \n");
    printf("\t\t========================\n");

    int i, n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    printf("Fibonacci series:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", fibo(i));
    return 0;
}
