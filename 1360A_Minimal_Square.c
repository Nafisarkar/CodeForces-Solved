//1360A_Minimal_Square.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int n=0,x,y;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&x,&y);
		if(x>y){
			int temp = x;
			x = y;
			y = temp;
		}

		int res =0;
		if(x*2>y){
			res=x*2;
		}else{
			res=y;
		}
		if(x*2>y){
			res*=x*2;
		}else{
			res*=y;
		}

		printf("%d\n",res);
	}
	return 0;
}