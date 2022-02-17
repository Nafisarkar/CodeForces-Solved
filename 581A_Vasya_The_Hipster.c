//581A_Vasya_The_Hipster.c
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("%d ",b);
		int rem = (a-b);
		printf("%d",rem/2);
	}
	else{
		printf("%d ",a);
		int rem = (b-a);
		printf("%d",rem/2);
	}
	return 0;
}