#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include"inout.h"

int main(){
	//inout();
	int t;
	scanf("%d",&t);
	int array[30000]={};
	while(t--){
		int temp;
		scanf("%d",&temp);
		for (int i = 0;i<temp;++i)
		{
			scanf("%d",&array[i]);
		}
		for(int i = 0; i < temp; ++i){
			for (int j = i; j < temp; ++j)
			{
				if(array[i]>array[j]){
					int temp = array[i];
					array[i] = array[j];
					array[j] = temp;
				}
			}
		}
		printf("%d\n",array[temp-1]-array[0]);
	}
	return 0;
}