//1408A_Yet_Another_Two_Integers_Problem.c
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int t;
	scanf("%d",&t);
	while(t--){
		int a=0,b=0;
		scanf("%d %d",&a,&b);
		if(a==b){
			printf("0\n");
		}
		else{
			if(abs(a-b)%10==0){
				printf("%d\n",abs(a-b)/10);
			}
			else{
				printf("%d\n",(abs(a-b)/10+1));
			}
		}
	}
	return 0;
}