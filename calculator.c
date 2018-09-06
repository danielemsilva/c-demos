#include <stdio.h>
#include <stdbool.h>
int main() {
    float num1, num2, result;
    int choice = -1;
    bool validOper;

    printf("-----------------------------------");
    printf("\nWelcome! Let's start calculating...\n");
    printf("-----------------------------------");

    while (choice != 0) {
        validOper = true;

        printf("\nEnter first value: ");
        scanf("%f", &num1);

        printf("Enter second value: ");
        scanf("%f", &num2);

        printf("\nNow, choose an action:\n");
        printf("1 - Add\n2 - Subtract\n");
        printf("3 - Multiply\n4 - Divide\n");
        printf("5 - Average\n0 - Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                result = num1 + num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1 * num2;
                break;
            case 4:
                if (num2 == 0) {
                    printf("\nOops... Impossible to divide by zero\n");
                    validOper = false;
                } else {
                    result = num1 / num2;
                }
                break;
            case 5:
                result = (num1 + num2) / 2;
                break;
            case 0:
                printf("\nBye bye!\n");
                validOper = false;
                break;
            default:
                printf("\nSorry, there is no such command!\n");
                validOper = false;
                break;
        }
        
        if (validOper) {
            printf("\nOK! Your result number is: %.2f\n", result);
        }
    }

    return 0;
}
