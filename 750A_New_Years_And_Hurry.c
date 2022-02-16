//750A_New_Years_And _Hurry.c
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int n=0,k=0,i=0;
	int time_needed=0;
	scanf("%d%d",&n,&k);
	int cunnection =0;
	for (i=1;i<=n;i++)
	{
		time_needed+=i*5;
		if(time_needed>240-k){
			printf("%d\n",i-1);
			cunnection=1;
			break;
		}
	}
	if(cunnection==0){
		printf("%d\n",i-1);
	}
	return 0;
}