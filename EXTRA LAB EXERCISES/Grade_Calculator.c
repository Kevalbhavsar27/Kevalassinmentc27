#include<stdio.h>
int main(){
	int marks;
	
	printf("Enter the Marks:-");
	scanf("%d",&marks);

	if(marks>90){
		printf("Grade is A");
	}
	else if(marks>75 && marks<=90)
	{
		printf("Gradfe is B");
	}
	else if(marks>50 && marks<=75)
	{
		printf("Grade is C");
	}
	else
	{
		printf("Grade is D");
	}
}
