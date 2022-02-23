//1353B_Two_Array_And_Swap.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include "inout.h"

int main(){
	inout();
	int n;
	scanf("%d",&n);
	while(n--){
		int x ,y;
		scanf("%d %d",&x,&y);
		int array1[100]={};
		int array2[100]={};
		for (int i = 0; i < x; ++i)
		{
			scanf("%d",&array1[i]);
		}
		for (int i = 0; i < x; ++i)
		{
			scanf("%d",&array2[i]);
		}

		for(int i=0;i<x;i++){
			for(int j=i;j<x;j++){
				if(array1[i]>array1[j]){
					int temp = array1[i];
					array1[i] = array1[j];
					array1[j] = temp;
				}
			}
		}

		for(int i=0;i<x;i++){
			for(int j=i;j<x;j++){
				if(array2[i]>array2[j]){
					int temp = array2[i];
					array2[i] = array2[j];
					array2[j] = temp;
				}
			}
		}

		for (int i = 0; i < x; ++i)
		{
			printf("%d ",array1[i]);
		}
		printf("\n");
		for (int i = 0; i < x; ++i)
		{
			printf("%d ",array2[i]);
		}
		printf("\n");

		for (int i = 0; i < x; ++i)
		{
			array1[i]
		}

	}
	
	return 0;
}