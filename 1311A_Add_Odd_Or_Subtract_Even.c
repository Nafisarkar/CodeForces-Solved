//1311A_Add_Odd_Or_Subtract_Even.c 
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
		int res=0;
		scanf("%d %d",&a,&b);
		int dif = abs(b-a);
		if(dif!=0){
			if(a>b){
				res++;
				if(dif%2!=0){
					res++;
				}
			}
			else if(a<b){
				res++;
				if(dif%2!=1){
					res++;
				}
			}
		}
		printf("%d\n",res);
	}
	return 0;
}