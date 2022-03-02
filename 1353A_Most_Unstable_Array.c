//1353A_Most_Unstable_Array.c 
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
		int n,m;
		scanf("%d %d",&n,&m);

		if(n==1){
			printf("0\n");
		}else{
			if(n==2){
				printf("%d\n",m);
			}else{
				printf("%d\n",m*2);
			}
		}
	}
	return 0;
}