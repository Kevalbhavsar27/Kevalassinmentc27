#include <stdio.h>

int fibonacci_recursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int fibonacci_iterative(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, fib = 0;
    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return b;
}

int main() {
    int n;

    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    
    printf("\nFibonacci sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci_recursive(i));
    }

    printf("\n\nNth Fibonacci number using recursion: %d", fibonacci_recursive(n));
    printf("\nNth Fibonacci number using iteration: %d\n", fibonacci_iterative(n));

    return 0;
}

