#include<stdio.h>
#include<string.h>
#include <limits.h>
//#include"inout.h"
void sort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    //inout();
    long long t;
    scanf("%lld",&t);
    while (t--) {
        long long size=0;
        scanf("%lld",&size);
        int array[100];
        for(int i=0;i<size;i++){
            scanf("%d",&array[i]);
        }
        sort(array,size);
        // for(int i=0;i<size;i++){
        //     printf("%d ",array[i]);
        // }
        // printf("\n");
        long long number = 1000000000;
        for(int i=0;i<size-1;i++){
            if(array[i+1]-array[i]<number){
                number = array[i+1]-array[i];
            }
        }
        printf("%lld\n",number);
    }
    return  0;
}