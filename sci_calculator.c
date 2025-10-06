#include <stdio.h>
#include <math.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n < 0) return 0;
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

int main() {
    int choice, n;
    double a, b;

    do {
        printf("\n--- Scientific Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (a^b)\n");
        printf("6. Square root\n");
        printf("7. Sine (in degrees)\n");
        printf("8. Cosine (in degrees)\n");
        printf("9. Tangent (in degrees)\n");
        printf("10. Logarithm (base e)\n");
        printf("11. Logarithm (base 10)\n");
        printf("12. Exponential (e^x)\n");
        printf("13. Factorial\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.6lf\n", a + b);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.6lf\n", a - b);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.6lf\n", a * b);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                if (b != 0)
                    printf("Result: %.6lf\n", a / b);
                else
                    printf("Error: Division by zero!\n");
                break;
            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.6lf\n", pow(a, b));
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a >= 0)
                    printf("Result: %.6lf\n", sqrt(a));
                else
                    printf("Error: Negative argument for square root!\n");
                break;
            case 7:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("Result: %.6lf\n", sin(a * M_PI / 180.0));
                break;
            case 8:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("Result: %.6lf\n", cos(a * M_PI / 180.0));
                break;
            case 9:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("Result: %.6lf\n", tan(a * M_PI / 180.0));
                break;
            case 10:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a > 0)
                    printf("Result: %.6lf\n", log(a));
                else
                    printf("Error: Non-positive argument for logarithm!\n");
                break;
            case 11:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a > 0)
                    printf("Result: %.6lf\n", log10(a));
                else
                    printf("Error: Non-positive argument for logarithm!\n");
                break;
            case 12:
                printf("Enter a number: ");
                scanf("%lf", &a);
                printf("Result: %.6lf\n", exp(a));
                break;
            case 13:
                printf("Enter a non-negative integer: ");
                scanf("%d", &n);
                if (n >= 0)
                    printf("Result: %llu\n", factorial(n));
                else
                    printf("Error: Negative argument for factorial!\n");
                break;
            case 0:
                printf("Exiting calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 0);

    return 0;
}