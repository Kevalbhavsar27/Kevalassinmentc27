#include <stdio.h>
#include <string.h>


bool isNumberPalindrome(int num) {
    int original = num, reversed = 0, remainder;

    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return (original == reversed);
}


bool isStringPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return false;
    }
    return true;
}

int main() {
    int num;
    char str[100];

  
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isNumberPalindrome(num))
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    
    printf("Enter a string: ");
    scanf("%s", str); 
    if (isStringPalindrome(str))
        printf("\"%s\" is a palindrome string.\n", str);
    else
        printf("\"%s\" is not a palindrome string.\n", str);

    return 0;
}

