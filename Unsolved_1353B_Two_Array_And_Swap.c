//Unsolved_1353B_Two_Array_And_Swap.c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include"inout.h"
void sort(int arr[],int s){
	for (int i=0;i<s;++i)
	{
		for (int j=i;j<s;++j)
		{
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	// for(int i=0;i<s;i++){
	// 	printf("%d ",arr[i]);
	// }
	// printf("\n");
}
void swap(int x,int y){
	int temp = x;
	x = y;
	y = temp;
}

int main(){
	inout();
	int t;
	scanf("%d",&t);
	while(t--){
		int x,y;
		scanf("%d %d",&x,&y);
		int array[50]={};
		int array2[50]={};
		for(int i =0;i<x;i++){
			scanf("%d",&array[i]);
			// printf("%d ",array[i]);
		}
		// printf("\n");
		sort(array,x);
		for(int i =0;i<x;i++){
			scanf("%d",&array2[i]);
			// printf("%d ",array[i]);
		}
		// printf("\n");
		int i = 0;
		for(int j=0; i<y&&j<x; j++)
			if(array[i] < array2[i]) swap(array[i], array2[i]), i ++;
		int sum = 0;
		for(int i=0; i<x; i++) sum += array[i];
		printf("%d\n", sum);
	}
	return 0;
}