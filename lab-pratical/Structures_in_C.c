#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

 main() {
    struct Student students[3];  
    int i;

    
    for(i = 0; i < 3; i++) {
        printf("\nEnter details of student %d:\n", i+1);

        printf("Name: ");
        scanf("%s", students[i].name);   

        printf("Roll number: ");
        scanf("%d", &students[i].roll);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

   
    printf("\n--- Student Details ---\n");
    for(i = 0; i < 3; i++) {
        printf("Student %d -> Name: %s, Roll: %d, Marks: %.2f\n",
               i+1, students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}

