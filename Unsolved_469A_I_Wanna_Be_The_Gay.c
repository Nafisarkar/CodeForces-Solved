// File:469A_I_Wanna_Be_The_Gay.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int array[400]={};
	int n,p;
	scanf("%d",&n);
	scanf("%d",&p);

	for (int i = 0; i < p*2; ++i)
	{
		int temp;
		scanf("%d",&temp);
		// printf("%d ",temp);
		array[i]=temp;
	}

	for(int i=0;i<p*2;i++){
		for (int j=i;j<p*2;j++)
		{
			if(array[i]>array[j]){
				int temp;
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	// printf("\n\n\n");
	// for (int i=0;i<p*2;i++)
	// {
	// 	printf("%d ",array[i]);
	// }
	int count=0;
	for(int i = 0 ; i < p*2 ; i++){
        if(array[i]!=array[i+1]){
            count++;
        }
    }
    // printf("count :%d\n",count);
    if(n == count){
        printf("I become the guy.");
    }else{
    	printf("Oh, my keyboard!");
    }
	return 0;
}

