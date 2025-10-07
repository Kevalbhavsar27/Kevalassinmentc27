#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longestWord[50] = "";
    int maxLength = 0, wordCount = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    
    sentence[strcspn(sentence, "\n")] = '\0';

    
    char *word = strtok(sentence, " ");
    while (word != NULL) {
        wordCount++;

        
        if (strlen(word) > maxLength) {
            maxLength = strlen(word);
            strcpy(longestWord, word);
        }

        word = strtok(NULL, " ");
    }

    printf("\nNumber of words: %d", wordCount);
    printf("\nLongest word: %s\n", longestWord);

    return 0;
}

