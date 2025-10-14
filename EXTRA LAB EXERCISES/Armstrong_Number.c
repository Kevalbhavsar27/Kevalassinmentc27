#include <stdio.h>

int main() {
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    
    printf("\nArmstrong numbers between 1 and 1000 are:\n");

    for (int i = 1; i <= 1000; i++) {
        int n = i, r, s = 0;
        while (n != 0) {
            r = n % 10;
            s = s + (r * r * r);
            n = n / 10;
        }
        if (s == i)
            printf("%d ", i);
    }

    return 0;
}

