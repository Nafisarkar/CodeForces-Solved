#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main(){
    char word[101];
    scanf("%s",word);
    int size = strlen(word);
    int uppercase=0,lowercase=0;
    for(int i=0;i<size;i++){
        if(word[i]>='A' && word[i]<='Z'){
            uppercase++;
        }
        else if(word[i]>='a' && word[i]<='z'){
            lowercase++;
        }
    }
    //printf("%d %d\n",uppercase,lowercase);
    if(uppercase==lowercase){
        for(int i=0;i<size;i++){
            printf("%c",tolower(word[i]));
        }
        printf("\n");
    }
    else if(uppercase>lowercase){
        for(int i=0;i<size;i++){
            printf("%c",toupper(word[i]));
        }
        printf("\n");
    }
    else if(uppercase<lowercase){
        for(int i=0;i<size;i++){
            printf("%c",tolower(word[i]));
        }
        printf("\n");
    }

    return 0;
}