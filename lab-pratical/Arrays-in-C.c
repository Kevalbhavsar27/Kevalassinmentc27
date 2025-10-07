#include <stdio.h>

int main() {
    
      int arr[5]; 
    
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);   
    }
    
    printf("\nYou entered (1D Array):\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);   
    }
    
    
	int matrix[3][3], sum = 0;
    
    printf("\nEnter 9 integers for 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);   
            sum += matrix[i][j];          
        }
    }
    
    printf("\n3x3 Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]); 
        }
        printf("\n");
    }
    
    printf("\nSum of all elements in the matrix = %d\n", sum);
    
    return 0;
}

