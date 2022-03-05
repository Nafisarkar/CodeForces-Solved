//492A_Vanya_And _Cubes.c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
//#include"inout.h"

int main(){
	//inout();
	int n;
	int run=0,last_added =0,c=0;
	scanf("%d",&n);
	while (n >0)
	{
		run++;
		c = last_added+run;
		last_added = c;

		n-=c;

		if(n<0){
			run--;
		}	
	}
		printf("%d",run);
	return 0;
}