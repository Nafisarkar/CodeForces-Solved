// File:677A_Vanya_And_Fence.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int n,h;
	int array;
	scanf("%d %d",&n,&h);
	int count=0;
	for(int i=0;i<n;i++){
		scanf("%d",&array);
		//printf("%d ",array);
		if(array>h){
			count=count+2;
		}
		else{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}