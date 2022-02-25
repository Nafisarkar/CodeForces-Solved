//1360B_HONEST_COACH_C
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"
int main(){
    //inout();
    int t;
    scanf("%d", &t);
    while(t--){
        int x ;
        scanf("%d",&x);
        int array[20000];
        for(int i=0; i < x; ++i){
            scanf("%d",&array[i]);
        }
        //sort array
        for(int i=0; i < x; ++i){
            for(int j=i+1; j < x; ++j){
                if(array[i] > array[j]){
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        int small=10000000000;
        for(int i=0; i < x-1; ++i){
            if(array[i] < array[i+1]<small){
                small = array[i+1]-array[i];
            };
        }
        //print the array
        // for(int i=0; i < x; ++i){
        //     printf("%d ",array[i]);
        // }
        printf("%d\n",small);
    }
    return 0;
}