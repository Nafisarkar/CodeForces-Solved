//1426A_Floor_Number.c 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
//#include"inout.h"

int main(){
	//inout();
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		if(a<=2) printf("1\n");
		else{
			a-=2;
			printf("%d\n",(a+b-1)/b+1);
		}
	}
	return 0;
}