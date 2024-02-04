#include <stdio.h>

int count = 0;

// Function to solve the Tower of Hanoi problem
void towerOfHanoi(int n, char source, char temp, char destination)
{
    if (n == 1)
    {
        // Move the top disk from source to destination
        printf("Move disk 1 from %c to %c\n", source, destination);
        count++;
        return;
    }
    // Move (n-1) disks from source to temporary using destination as the temporary peg
    towerOfHanoi(n - 1, source, destination, temp);
    count++;

    // Move the nth disk from source to destination peg
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Move (n-1) disks from temporary to destination using source as the temporary peg
    towerOfHanoi(n - 1, temp, source, destination);
}

int main()
{
    printf("\t\t====================\n");
    printf("\t\t   Tower of Hanoi   \n");
    printf("\t\t====================\n");

    int numDisks;
    printf("Enter the number of disks: ");
    scanf("%d", &numDisks);

    if (numDisks < 1)
        printf("Invalid input. Please enter a positive integer.\n");
    else
        printf("Moves to solve the Tower of Hanoi problem with %d disks:\n", numDisks);
    towerOfHanoi(numDisks, 'A', 'B', 'C');
    printf("Total Number of Steps: %d\n", count);
    return 0;
}