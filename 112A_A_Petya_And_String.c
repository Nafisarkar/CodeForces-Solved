//112A_A_Petya_And_String.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
    //inout();
    char string1[100];
    char string2[100];
    scanf("%s",string1);
    scanf("%s",string2);
    for (int i = 0; i <strlen(string1) ;i++)
    {
        string1[i]=tolower(string1[i]);
        string2[i]=tolower(string2[i]);
    }
    // printf("%s\n",string1);
    // printf("%s\n",string2);
    int no_metch=0;
    if(string2==string1){
        printf("0\n");
    }else{
        for(int i=0; i<strlen(string1); i++)
        {
            if(string1[i]<string2[i])
            {
                printf("-1");
                no_metch++;
                break;
            }
            if(string1[i]>string2[i])
            {
                printf("1");
                no_metch++;
                break;
            }
        }
        if(no_metch==0){
            printf("0\n");
        }
    }
    return 0;
}