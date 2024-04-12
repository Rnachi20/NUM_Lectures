#include <stdio.h>
#include <string.h>

int main() {
    char my_string[100];
    int word_count = 0;
    printf("Enter a string: ");
    gets(my_string); 
    char *token = strtok(my_string, " "); 
    while (token != NULL) {
        word_count++; 
        token = strtok(NULL, " "); 
    }
    printf("Number of words: %d\n", word_count);
    return 0;
}

