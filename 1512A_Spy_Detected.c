//1512A_Spy_Detected.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int t;
	scanf("%d",&t);
	while(t--){
		int array[101]={};
		int x=0;
		scanf("%d",&x);
		for (int i = 0; i < x; ++i)
		{
			scanf("%d",&array[i]);
		}

		// printf("Before sorting \n");
		// for (int i = 0; i < x; ++i)
		// {
		// 	printf("%d ",array2[i]);
		// }
		// printf("\n");

		int found=0;
		for (int i=1;i<x-1;++i) {
            if (array[i]!=array[i-1] && array[i]!=array[i+1]){
                printf("%d\n",i+1);
                found = 1;
            }
        }
        if (!found){
            if (array[0]!=array[1]){
                printf("1\n");
            } else{
                printf("%d\n",x);
            }
        }

		
	}

	return 0;
}