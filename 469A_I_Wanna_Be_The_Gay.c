// File:469A_I_Wanna_Be_The_Gay.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int array[400]={};
	int f,p,q;
	scanf("%d",&f);
	scanf("%d",&p);

	for (int i=0;i<p;i++)
	{
		scanf("%d",&array[i]);
	}
	scanf("%d",&q);
	for (int i=p;i<p+q;i++)
	{
		scanf("%d",&array[i]);
	}

	for (int i = 0; i < p+q; ++i)
	{
		for (int j = i; j < p+q; ++j){
			if(array[i]>array[j]){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	int counter=0;
	for(int i =0;i<p+q;i++){
		if(array[i]!=array[i+1]){
			counter++;
		}
	}

	if(counter==f){
		printf("I become the guy.\n");
	}else{
		printf("Oh, my keyboard!\n");
	}
		return 0;
}

