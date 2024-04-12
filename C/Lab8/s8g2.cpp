#include<stdio.h>
#include<ctype.h>
#include<string.h>
// ug buriin egshgiin toog tooloh funkts
int count_vowels(char *str){
    int vowels=0;
    for(int i=0; str[i]!='\0';i++){
        char c=tolower(str[i]); 
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            vowels++;
        }
    }
    return vowels;
}

main() {
    char sentence[100];
    printf("Oguulberee oruul: ");
    gets(sentence);
    
    int max_vowels=0;
    char max_vowels_words[100] = ""; 
    
    
    char *word=strtok(sentence, " "); 
    while(word!=NULL){
        int vowels=count_vowels(word);
        if (vowels>max_vowels) {
            max_vowels=vowels;
            strcpy(max_vowels_words, word); 
        } else if (vowels==max_vowels) {
            strcat(max_vowels_words, " "); 
            strcat(max_vowels_words, word);
        }
        word = strtok(NULL, " ");
    }
    
    printf("%s", max_vowels_words);
}
