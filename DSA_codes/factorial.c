#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    printf("\t\t==========================\n");
    printf("\t\t   Factorial Calculator  \n");
    printf("\t\t==========================\n");

    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}