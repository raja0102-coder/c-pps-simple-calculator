#include <stdio.h>

void printMenu() {
    printf("==================================================\n");
    printf("         PPS SIMPLE CALCULATOR ENGINE             \n");
    printf("==================================================\n");
    printf("  1. Addition (+)\n");
    printf("  2. Subtraction (-)\n");
    printf("  3. Multiplication (*)\n");
    printf("  4. Division (/)\n");
    printf("  5. Modulus (%%)\n");
    printf("  6. Exit\n");
    printf("==================================================\n");
}

int main() {
    int choice;
    double num1, num2, result;
    int n1, n2;

    while (1) {
        printMenu();
        printf("Enter operation choice (1-6): ");
        if (scanf("%d", &choice) != 1) break;

        if (choice == 6) {
            printf("\n    Exiting Calculator. Program finished.\n");
            break;
        }

        if (choice < 1 || choice > 6) {
            printf("\n    [ERROR] Invalid choice! Select 1 to 6.\n\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("    [RESULT] %.2lf + %.2lf = %.2lf\n\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("    [RESULT] %.2lf - %.2lf = %.2lf\n\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("    [RESULT] %.2lf * %.2lf = %.2lf\n\n", num1, num2, result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("    [ERROR] Division by zero is undefined!\n\n");
                } else {
                    result = num1 / num2;
                    printf("    [RESULT] %.2lf / %.2lf = %.2lf\n\n", num1, num2, result);
                }
                break;
            case 5:
                n1 = (int)num1;
                n2 = (int)num2;
                if (n2 == 0) {
                    printf("    [ERROR] Modulus by zero is undefined!\n\n");
                } else {
                    printf("    [RESULT] %d %% %d = %d\n\n", n1, n2, n1 % n2);
                }
                break;
        }
    }

    return 0;
}
