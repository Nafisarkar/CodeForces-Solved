// File:1030A_InSearch_Of_Easy_Problem.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int n;
	scanf("%d",&n);
	int counter=0;
	for (int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		if(x!=0){
			counter++;
		}	
	}

	if(counter>0){
		printf("HARD\n");
	}
	else
		printf("EASY\n");
	return 0;
}