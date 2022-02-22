//268A_Games.c
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int n,counter=0;
	scanf("%d",&n);
	int array1[200]={},array2[200]={};
	for (int i = 0; i < n; ++i)
	{
		scanf("%d %d",&array1[i],&array2[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(array1[i]==array2[j]){
				counter++;
			}
		}
	}

	printf("%d",counter);
	return 0;
}