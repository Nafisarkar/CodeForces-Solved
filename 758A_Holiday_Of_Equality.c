//758A_Holiday_Of_Equality.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int n;
	scanf("%d",&n);
	int array[101]={};
	for (int i=0;i<n;++i)
	{
		scanf("%d",&array[i]);
	}
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(array[i]>array[j]){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	int need=0;
	for (int i = 0; i < n; ++i)
	{
		need +=array[n-1]-array[i];
	}
	printf("%d",need);
	return 0;
}