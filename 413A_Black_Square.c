//413A_Black_Square.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int array[5];
	scanf("%d %d %d %d",&array[1],&array[2],&array[3],&array[4]);
	char array2[10000000]={};
	scanf("%s",array2);
	int size = strlen(array2);
	// printf("%s",array2);
	int res=0;
	for (int i = 0; i < size; ++i){
		int temp = array2[i]-'0';
		// printf("%d ",array[temp]);
		res+=array[temp];
	}
	printf("%d",res);
	return 0;
}