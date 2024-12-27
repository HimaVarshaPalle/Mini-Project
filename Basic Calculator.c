#include <stdio.h>
#include<math.h>
int main() {
    int operation;
    float num1, num2, result;
    printf("Select an Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Percentage\n");
    printf("Enter the number corresponding to the operation: ");
    scanf("%d", &operation);
    if (operation >= 1 && operation <= 5) {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);}
        if (operation == 1) {
            result = num1 + num2;
            printf("Result: %.2f\n", result);
        } else if (operation == 2) {
            result = num1 - num2;
            printf("Result: %.2f\n", result);
        } else if (operation == 3) {
            result = num1 * num2;
            printf("Result: %.2f\n", result);
        } else if (operation == 4) {
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
        } else if (operation == 5) {
            result = (num1 / num2) * 100;
            printf("Percentage: %.2f%%\n", result);
        }
    } else {
        printf("Invalid operation selected. Please enter a number between 1 and 5.\n");
    }
      return 0;
}
