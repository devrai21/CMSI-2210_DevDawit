#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * file; // performs file-related operations
    char path[100];

    char ch;
    int wordcount, characters; // stores the values while counting the words 

    printf("What is your file source path: ");
    scanf("%s", path);

    file = fopen(path, "r"); // opens file in path; StackOverflow

    if (file == NULL) {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists.\n");

        exit(EXIT_FAILURE);
    }
    
    wordcount = 0;
    
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0') {
            wordcount++;
        }
    }
    if (characters > 0) {
        wordcount++;
    }
    printf("\n");
    printf("Total words = %d\n", wordcount);
    
    fclose(file);

    return 0;
}