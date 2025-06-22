#include <stdio.h>

int main() {
    float a, b, ans;
    char op;

    // Take inputs separately
    printf("Enter first number (a): ");
    scanf("%f", &a);

    printf("Enter operator (<op>): ");
    scanf(" %c", &op);  // space before %c to consume newline

    printf("Enter second number (b): ");
    scanf("%f", &b);

    // Perform operation
    switch (op) {
        case '+':
            ans = a + b;
            printf("Result: %.2f\n", ans);
            break;
        case '-':
            ans = a - b;
            printf("Result: %.2f\n", ans);
            break;
        case '*':
            ans = a * b;
            printf("Result: %.2f\n", ans);
            break;
        case '/':
            if (b == 0) {
                printf("Not Defined!\n");
            } else {
                ans = a / b;
                printf("Result: %.2f\n", ans);
            }
            break;
        default:
            printf("Invalid operator. Use +, -, *, or /.\n");
    }

    return 0;
}
