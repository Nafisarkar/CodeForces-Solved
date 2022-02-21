//432A_Choosing_Teams.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int n,k;
	scanf("%d %d",&n,&k);
	int array[10000]={};
	for (int i = 0; i < n; ++i)
	{
		int temp=0;
		scanf("%d",&temp);
		array[i]=temp+k;
	}
	int counter=0;
	for (int i = 0; i < n; ++i)
	{
		if(array[i]<=5){
			counter++;
		}
	}
	printf("%d",counter/3);

	return 0;
}