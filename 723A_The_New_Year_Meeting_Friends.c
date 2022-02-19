//723A_The_New_Year_Meeting_Friends.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int array[3];
	for(int i=0;i<3;i++){
		scanf("%d",&array[i]);
	}
	for(int i=0;i<3;i++){
		for(int j=i;j<3;j++){
			if(array[i]>array[j]){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	//printf("%d %d %d\n",array[0],array[1],array[2]);
	printf("%d",(array[2]-array[1])+(array[1]-array[0]));
	return 0;
}