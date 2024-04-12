#include <stdio.h>
#include <string.h>
main(){
    char sentence[100];
    char word[100];
    int found_positions[50]; 
    int count = 0; // ugiin oldson too oldoogui bol -1
    int word_len, sent_len;
    int i, j;

    printf("Oguulber oruul: ");
    gets(sentence);
    sent_len = strlen(sentence) - 1; //ehleliin bairlaliig shalgana, oguulber dotorh ugiin buh tolhioldliig olj chadna
    printf("Enter a word: ");
    scanf("%s", word);
    word_len = strlen(word);

    // ugiig haij bairlaliig n hadgalna
    for(i=0;i<=sent_len-word_len;i++){
        for(j=0;j<word_len;j++){
            if(sentence[i+j] != word[j]) {
                break;
            }
        }
        if(j==word_len)){ // ug oldwol
            found_positions[count++] = i;
        }
    }

    if(count == 0){
        printf("-1\n"); // oldohgui bol -1iig hewleh
    }else{
        printf("'%s' gesen ug oldson bairlaluud /0-s ehelj toolno/:\n", word);
        for(i=0;i<count;i++) {
            printf("%d ", found_positions[i]);
        }
        printf("\n");
    }
}

