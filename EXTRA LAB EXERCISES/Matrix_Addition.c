#include<stdio.h>
int main(){
	int i,j,k,mat1[3][3],mat2[3][3],sum[3][3],prod[3][3];
	
	//FIRST MATRIX 
	printf("Enter the FIrst matrix :-\n");
	for(i=0;i<3;i++){
	    	for(j=0;j<3;j++){
		printf("mat1[%d][%d] =", i,j);
		scanf("%d",&mat1[i][j]);
	}
	}
	//second MATRIX 
	printf("Enter the Second matrix :-\n");
	for(i=0;i<3;i++){
	    	for(j=0;j<3;j++){
		printf("mat2[%d][%d] =",i,j);
		scanf("%d",&mat2[i][j]);
	}
	}
	//matrix Addition
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	
	//disply the matrix for sum
	
	printf("3*3 matrix sum disply is :- \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",sum[i][j]);
		}
			printf("\n");
	}
	//multipication 
	for(i=0;i<3;i++){
	    for(j=0;j<3;j++){
	        prod[i][j]=0;
	        for(k=0;k<3;k++){
	            prod[i][j]+=mat1[i][k] * mat2[k][j];
	        }
	    }
	}
		//disply the matrix for multipication
	
	printf("3*3 matrix sum disply is :- \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",prod[i][j]);
		}
			printf("\n");
	}
}

