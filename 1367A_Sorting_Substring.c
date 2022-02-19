//1367A_Sorting_Substring.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int n;
	scanf("%d",&n);
	while(n--){
		char array[1000]={};
		char resarry[1000]={};
		scanf("%s",array);
		int size = strlen(array);
		int counter=0;
		for (int i = 1; i < size-1; i++)
		{
			if(array[i]!=array[i+1]){
				resarry[counter]=array[i];
				counter++;
			}
			else if(array[i]==array[i+1]){
				resarry[counter]=array[i];
				i++;
				//printf("%d ",i);
				counter++;
			}
		}
		int res_size = strlen(resarry);
		printf("%c",array[0]);
		for(int i=0;i<res_size;i++){
				printf("%c",resarry[i]);
		}
		printf("%c\n",array[size-1]);
	}
	return 0;
}