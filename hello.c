#include <stdio.h>

int main() {
    // Print a greeting message
    printf("Hello, World!\n");

    // Declare two integer variables
    int num1, num2, sum;

    // Ask the user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform addition
    sum = num1 + num2;

    // Print the result
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);

    return 0;
}
