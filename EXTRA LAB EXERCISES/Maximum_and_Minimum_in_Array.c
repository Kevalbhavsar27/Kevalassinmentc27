#include<stdio.h>
void main(){
	int i,j,temp,min,max,arr[10];
	
	for(i=0;i<10;i++){
			printf("Enter the Number for array a[%d]:- ",i+1);
			scanf("%d",&arr[i]);
	}
	
	max=arr[0];
	min=arr[0];
	
	for(i=0;i<10;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	
	printf("\nMaximum numbert of array:-\n%d",max);
	printf("\nMinimum numbert of array:-\n%d",min);
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
		if(arr[i]>arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}	
		}
	}
printf("\nAscending order of array \n:-");
for(i=0;i<10;i++){
	printf("%d\t", arr[i]);
}	 
	
	
}
