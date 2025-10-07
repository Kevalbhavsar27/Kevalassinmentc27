#include <stdio.h>

int main() {
    printf("Using break (stop when number = 5):\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  
        }
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Using continue (skip number = 3):\n");
    for (int j = 1; j <= 10; j++) {
        if (j == 3) {
            continue; 
        }
        printf("%d ", j);
    }
    printf("\n");

    return 0;
}

