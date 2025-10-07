#include<stdio.h>
int main(){
	int x1,x2,x3;
	
	printf("Enter the First Number:-");
	scanf("%d",&x1);
	
	printf("Enter the Sec Number:-");
	scanf("%d",&x2);
	
	printf("Enter the third Number:-");
	scanf("%d",&x3);
	
	if(x1>x2 && x1>x3)
	{
		printf("First Number is Largest");
	}
	else if(x2>x1 && x2>x3)
	{
		printf("sec Number is Largest");
	}
	else if(x3>x1 && x3>x2)
	{
		printf("Third Number is Largest\n");
	}
	
	 if(x1<x2 && x1<x3)
	{
		printf("\nFirst Number is smallest");
	}
	else if(x2<x3 && x2<x1)
	{
		printf("\nSec Number is smallest");
	}
	else if(x3<x1 && x3<x2)
	{
		printf("\nThird Number is smallest");
	}
}

