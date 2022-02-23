//785A_Anton_And_Polyheadrons.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int n = 0,res=0;
	scanf("%d",&n);
	while(n--){

		char name[20]={};
		scanf("%s",name);
		if(name[0]=='I'){
			res+=20;
		}
		else if(name[0]=='D'){
			res+=12;
		}
		else if(name[0]=='O'){
			res+=8;
		}
		else if(name[0]=='C'){
			res+=6;
		}
		else if(name[0]=='T'){
			res+=4;
		}
	}
	printf("%d",res);
	return 0;
}