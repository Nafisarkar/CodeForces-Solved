//136A_Presents.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"
int main(){
	//inout();
	int n,b,array[200]={};
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&b);
		array[b]=i+1;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d ",array[i+1]);	
	}
	return 0;
}