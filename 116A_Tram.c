//116A_Tram.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int cap=0,inTheTrain=0;
	int t;
	scanf("%d",&t);
	for (int i = 0; i < t; ++i)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		inTheTrain+=y;
		inTheTrain-=x;
		if(cap>inTheTrain){
			cap=cap;
		}else{
			cap=inTheTrain;
		}
	}
	printf("%d",cap);
	
	return 0;
}