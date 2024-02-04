#include <stdio.h>

// Function to calculate GCD using recursion
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}

int main()
{
    printf("\t\t====================\n");
    printf("\t\t   GCD Calculator   \n");
    printf("\t\t====================\n");

    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, GCD(num1, num2));
    return 0;
}
