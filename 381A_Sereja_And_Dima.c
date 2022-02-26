//381A_Sereja_And_Dima.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int n;
	scanf("%d",&n);
	int array[1001]={};
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&array[i]);
	}
	int lastdeget=n-1;
	int l=0;
	int f1=0,f2=0;
	for (int i = 0; i < n; ++i)
	{
		// printf("i ->%d  lastdeget ->%d\n",i,lastdeget);
		// printf("idigit ->%d  lastdegetdigit ->%d\n",array[i],array[lastdeget]);
		if(i%2==0){
			if(array[lastdeget]>array[l]){
				f1+=array[lastdeget];
				--lastdeget;
				
			}else if(array[lastdeget]<array[l]){
				f1+=array[l];
				l++;
			}
			else{
				f1+=array[l];
			}
		}else{
			if(array[lastdeget]>array[l]){
				f2+=array[lastdeget];
				--lastdeget;
			}else if(array[lastdeget]<array[l]){
				f2+=array[l];
				++l;
			}else{
				f2+=array[l];
			}

		}
	}
	printf("%d %d\n",f1,f2);
	return 0;
}