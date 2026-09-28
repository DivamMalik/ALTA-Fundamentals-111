#include <stdio.h>
#include <stdbool.h>

int sum(int a, int b) {
    return a + b;
}

int factorial(int a) {
    if (a < 0) return -1;
    int fact = 1;
    for (int i = 2; i <= a; i++) {
        fact *= i;
    }
    return fact;
}

bool prime(int a) {
    if (a <= 1) return false;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int largest_no(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int main() {
 int choice, a, b, c;

    while (1) {
        printf("========================================\n");
        printf("1 - Sum of two numbers\n");
        printf("2 - Factorial\n");
        printf("3 - Prime check\n");
        printf("4 - Largest of three numbers\n");
        printf("5 - Exit\n");
        printf("========================================\n");
        printf("Select program: ");
        
        if (scanf("%d", &choice) != 1) {
            break; 
        }

        if (choice == 5) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Sum = %d\n", sum(a, b));
                break;

            case 2:
                printf("Enter number: ");
                scanf("%d", &a);
                if (a < 0) {
                    printf("Factorial is not defined for negative numbers.\n");
                } else {
                    printf("Factorial = %d\n", factorial(a));
                }
                break;

            case 3:
                printf("Enter number: ");
                scanf("%d", &a);
                printf("%d is %s\n", a, prime(a) ? "Prime" : "Not Prime");
                break;

            case 4:
                printf("Enter three numbers: ");
                scanf("%d %d %d", &a, &b, &c);
                printf("Largest number = %d\n", largest_no(a, b, c));
                break;

            default:
                printf("Invalid choice! Please select a valid option (1-5).\n");
        }
    }

    return 0;
}
