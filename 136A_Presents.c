// File:136A_Presents.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"
int main(){
	//inout();
	int n=0;
	char array[20]={};
	scanf("%d ",&n);
	//printf("n=%d\n",n);
	char sample;
	int counter=0;
	for(int i=0;i<n;i++){
		scanf("%s\n",array);
		if(i==0){
			sample=array[0];
			counter++;
		}
		else{
			if(array[0]!=sample){
				counter++;
				sample=array[0];
			}
		}
	}
	printf("%d",counter);
	return 0;
}
