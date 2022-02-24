//703A_Mushka_And_Game.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int n;
	scanf("%d",&n);
	int x=0,y=0;
	while(n--){
		int temp1=0,temp2=0;
		scanf("%d %d",&temp1,&temp2);
		if(temp1>temp2){
			x++;
		}
		else if(temp2>temp1){
			y++;
		}
	}
	if(x>y){
		printf("Mishka\n");
	}else if(y>x){
		printf("Chris\n");
	}else{
		printf("Friendship is magic!^^");
	}

	return 0;
}