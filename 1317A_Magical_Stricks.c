//1317A_Magical_Stricks.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int t=0;
	scanf("%d",&t);
	while(t--){
		int temp=0;
		scanf("%d",&temp);
		if(temp%2==0){
			printf("%d\n",temp/2);
		}else{
			printf("%d\n",(temp/2)+1);
		}
	}
	return 0;
}