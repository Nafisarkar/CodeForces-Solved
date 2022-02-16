//155A_I_Love_SAKUNO.c
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int num;
	int counter=0;
	scanf("%d",&num);
	int small=10001;
	int big=0;
	for (int i = 0; i < num; ++i)
	{
		int temp;
		scanf("%d",&temp);
		if(i==0){
			small=temp;
			big=temp;
		}
		else{
			if(temp<small){
				counter++;
				small=temp;
			}
			else if(temp>big){
				counter++;
				big=temp;
			}
		}	
	}
	printf("%d",counter);
	return 0;
}