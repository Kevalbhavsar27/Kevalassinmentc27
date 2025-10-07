#include<stdio.h>
int main(){
	int x1,x2,x3,large,small;
	
	printf("Enter the First Number:-");
	scanf("%d",&x1);
	
	printf("Enter the Sec Number:-");
	scanf("%d",&x2);
	
	printf("Enter the third Number:-");
	scanf("%d",&x3);
	
	if(x1>x2 && x1>x3){
	    large=1;
	}
	else if(x2>x3 && x2>x1){
	    large=2;
	}
	else if(x3>x1 && x3>x2){
	    large=3;
	}
	
	if(x1<x2 && x1<x3){
	    small=1;
	}
	else if(x2<x3 && x2<x1){
	    small=2;
	}
	else if(x3<x1 && x3<x2){
	    small=3;
	}
	
	
	
	switch(large)
	{
	case 1:
	if(x1>x2 && x1>x3)
	{
		printf("First Number is Largest");
	}
	break;
	
	case 2:
	if(x2>x3 && x2>x1)
	{
		printf("Sec Number is Largest");
	}
	break;
	
	case 3:
	if(x3>x1 && x3>x2)
	{
		printf("Third Number is Largest");
	}
	break;
	}
	
	switch(small)
	{
	case 1:
	if(x1<x2 && x1<x3)
	{
		printf("\nFirst Number is smallest");
	}
	break;
	
	case 2:
	if(x2<x3 && x2<x1)
	{
		printf("\nSec Number is smallest");
	}
	break;
	
	case 3:
	if(x3<x1 && x3<x2)
	{
		printf("\nThird Number is Smallest");
	}
	break;
	}
}
	
