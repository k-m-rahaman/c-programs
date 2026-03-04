#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("===== Simple Calculator =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
    }

    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case 4:
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        case 5:
            printf("Exiting Calculator...\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
