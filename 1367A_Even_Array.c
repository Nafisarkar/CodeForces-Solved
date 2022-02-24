//1367A_Even_Array.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int x,array[200]={};
	scanf("%d",&x);
	while(x--){
		int num;
		int odd=0,even=0;
		scanf("%d",&num);
		for (int i = 0; i < num; ++i)
		{
			scanf("%d",&array[i]);
		}

		for(int i=0;i<num;i++){
			if(i%2!=array[i]%2){
				if(array[i]%2==1){
					odd++;
				}
				else{
					even++;
				}
			}
		}
		if(odd!=even){
			printf("-1\n");
		}
		else{
			printf("%d\n",even);
		}
	}

	return 0;
}