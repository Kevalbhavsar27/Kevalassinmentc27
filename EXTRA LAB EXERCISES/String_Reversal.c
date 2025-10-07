#include <stdio.h>


int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}


void reverseString(char str[]) {
    int start = 0;
    int end = stringLength(str) - 1;
    char temp;

    while (start < end) {
        
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str); 

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

