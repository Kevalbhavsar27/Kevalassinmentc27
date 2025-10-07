#include <stdio.h>

int main() {
    int a;
    printf("Enter the Number: ");
    scanf("%d", &a);

    if(a % 2 == 0){
        printf("The number is Even\n");
    } else {
        printf("The number is Odd\n");
    }

    
    if(a > 0){
        printf("The number is Positive\n");
    } else if(a < 0){
        printf("The number is Negative\n");
    } else {
        printf("The number is Zero\n");
    }

    // Check multiple of 3 and 5
    if(a % 3 == 0 && a % 5 == 0){
        printf("The number is multiple of 3 and 5\n");
    } else {
        printf("The number is NOT multiple of 3 and 5\n");
    }

}

