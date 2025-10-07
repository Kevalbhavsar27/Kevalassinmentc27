#include <stdio.h>

 main() {
    FILE *fp;
    char str[100];

    
    fp = fopen("myfile.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fprintf(fp, "Hello, this is a file handling example in C.\n");
    fclose(fp);  

   
    fp = fopen("myfile.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    
    printf("Contents of the file:\n");
    while (fgets(str, sizeof(str), fp)) {
        printf("%s", str);
    }

    fclose(fp); 
    return 0;
}

