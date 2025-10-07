#include<stdio.h>
int main()
{
    int n,sum,digit=0,rev=0;
    
    printf("Enter The Number :-");
    scanf("%d",&n);
    
    while(n!=0){
        digit=n%10;
        sum=sum+digit;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("\nSum of Digit=%d",sum);
    printf("\nrevesed of Digit=%d",rev);
}
