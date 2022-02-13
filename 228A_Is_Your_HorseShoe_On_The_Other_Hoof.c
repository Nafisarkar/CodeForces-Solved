// File:228A_Is_Your_HorseShoe_On_The_Other_Hoof.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int array[10]={};
	scanf("%d %d %d %d",&array[0],&array[1],&array[2],&array[3]);

	for(int i =0;i<4;i++){
		for(int j=i;j<4;j++){
			if(array[i]>array[j]){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	int counter=0;
	for (int i = 0; i < 4; ++i)
	{
		if(array[i]==array[i+1]){
			counter++;
		}
	}
	printf("%d\n",counter);

	return 0;
}