//1454A_SPECIAL_PERMUTATION_C
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"
int main(){
    //inout();
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            printf("%d ",((i+1)%n)+1);
        }
        printf("\n");
 
    }
    return 0;
}