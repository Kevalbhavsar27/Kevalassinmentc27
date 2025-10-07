#include <stdio.h>

float factorial(int n);

int main() {
    int num;
    float result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("Factorial of %d = %.2f\n", num, result);

    return 0;
}

float factorial(int n) {
    float fact = 1.0;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

