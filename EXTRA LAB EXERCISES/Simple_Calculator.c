#include <stdio.h>
 int main() {
    int a,b;
    char oprater;
    
printf("Enter the intger A:-");
scanf("%d", &a);
printf("Enter the intger B:-:-");
scanf("%d",&b);

printf("Enter the Oprater:- (+,-,*,/,%)");
scanf(" %c",&oprater);

switch(oprater) {
        case '+':
            printf("oprater: %d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("oprater: %d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("oprater: %d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            printf("oprater: %d / %d = %d\n", a, b, a / b);
            break;
        case '%':
            printf("oprater: %d %% %d = %d\n", a, b, a % b);
            break;
        default:
            printf("Write the Correct Oprater\n",oprater);
            break;
}
}
