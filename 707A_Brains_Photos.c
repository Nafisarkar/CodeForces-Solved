//707A_Brains_Photos.c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
//#include"inout.h"

int main(){
	//inout();
	int n,m;
	scanf("%d %d",&n,&m);
	int color=0;
	for (int i = 0; i < n;i++)
	{
		for(int j=0;j<m;j++){
			char temp;
			scanf(" %c",&temp);
			if(temp=='M' || temp=='Y' || temp=='C'){
				color++;
			}
		}
	}
	if(color!=0){
		printf("#Color");
	}else{
		printf("#Black&White");
	}
	return 0;
}