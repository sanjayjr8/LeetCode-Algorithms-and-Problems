#include <stdio.h>
#include <ctype.h>

void printString(char *str);
int countCharacters(char *str);
int countWords(char *str);
int countSentences(char *str);

int main() {
    char str[1000];

    // Get the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Print the string
    printf("The string is: ");
    printString(str);

    // Count the number of characters
    int numChars = countCharacters(str);
    printf("\nNumber of characters: %d\n", numChars);

    // Count the number of words
    int numWords = countWords(str);
    printf("Number of words: %d\n", numWords);

    // Count the number of sentences
    int numSentences = countSentences(str);
    printf("Number of sentences: %d\n", numSentences);

    return 0;
}

// Function to print a string using pointers
void printString(char *str) {
    while (*str != '\0') {
        printf("%c", *str);
        str++;
    }
}

// Function to count the number of characters in a string using pointers
int countCharacters(char *str) {
    int count = 0;

    while (*str != '\0') {
        if (*str != '\n') {
            count++;
        }
        str++;
    }

    return count;
}

// Function to count the number of words in a string using pointers
int countWords(char *str) {
    int count = 0;
    int inWord = 0;

    while (*str != '\0') {
        if (isalpha(*str)) {
            if (!inWord) {
                inWord = 1;
                count++;
            }
        } else {
            inWord = 0;
        }
        str++;
    }

    return count;
}

// Function to count the number of sentences in a string using pointers
int countSentences(char *str) {
    int count = 0;

    while (*str != '\0') {
        if (*str == '.' || *str == '!' || *str == '?') {
            count++;
        }
        str++;
    }

    return count;
}
