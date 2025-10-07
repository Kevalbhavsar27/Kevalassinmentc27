// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a ,month;
    printf("Enter the Number:-");
    scanf("%d",&a);
    if(a%2==0){
        printf("The number is Even");
    }
    else{
        printf("THe Number is Odd\n");
    }
    printf("\nEnter the Month in int 1 to 12: ");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        printf("month:-january\n");
        break;
        case 2:
        printf("month:-Fabruary\n");
        break;
        case 3:
        printf("month:-March\n");
        break;
        case 4:
        printf("month:-April\n");
        break;
        case 5:
        printf("month:-May\n");
        break;
        case 6:
        printf("month:-June\n");
        break;
        case 7:
        printf("month:-July\n");
        break;
        case 8:
        printf("month:-August\n");
        break;
        case 9:
        printf("month:-September\n");
        break;
        case 10:
        printf("month:-October\n");
        break;
        case 11:
        printf("month:-November\n");
        break;
        case 12:
        printf("month:-December\n");
        break;
        default:
        printf("Type the Integar into 1 t0 12");
        break;
    }
}
