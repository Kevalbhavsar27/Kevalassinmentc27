#include <stdio.h>
#include <time.h>


unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}


unsigned long long factorial_iterative(int n) {
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &n);

    clock_t start = clock();
    unsigned long long fact_rec = factorial_recursive(n);
    clock_t end = clock();
    double time_rec = ((double)(end - start)) / CLOCKS_PER_SEC;

    start = clock();
    unsigned long long fact_iter = factorial_iterative(n);
    end = clock();
    double time_iter = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nFactorial of %d using recursion: %llu", n, fact_rec);
    printf("\nTime taken (recursive): %lf seconds", time_rec);

    printf("\n\nFactorial of %d using iteration: %llu", n, fact_iter);
    printf("\nTime taken (iterative): %lf seconds\n", time_iter);

    return 0;
}

