#include<stdio.h>
int main(){
	
	int i,n,sum=0;
	float ave;
	
	printf("Enter the Elements :- ");
	scanf("%d",&n);
	
	int arr[n];
	
	
	for(i=0;i<n;i++){
		printf("Enter the %d Number :-",i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	
	ave=(float)sum / n;
	
	printf("Sum of Number is:= %d\n",sum);
	printf("average of Number is:= %.2f\n",ave);
}
