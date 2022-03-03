//1385B_Restore_The_Permutation_By_Marger.c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
//#include"inout.h"

int main(){
	//inout();
	int t;
	scanf("%d",&t);
	while(t--){
		int size=0;
		scanf("%d",&size);
		int main_Array[300]={};
		int counter=0;
		for (int i = 0; i < size*2; ++i)
		{
			int temp=0;
			scanf("%d",&temp);
			int found=0;
			for (int i = 0; i < size; ++i)
			{
				if(temp==main_Array[i]){
					found++;
				}
			}
			if(found==0){
				main_Array[counter]=temp;
				counter++;
			}
		}
		for (int i = 0; i < size; ++i)
		{
			printf("%d ",main_Array[i]);
		}
		printf("\n");
	}
	return 0;
}