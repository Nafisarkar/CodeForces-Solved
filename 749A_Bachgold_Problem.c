//749A_Bachgold_Problem.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
//#include "inout.h"

int main(){
	//inout();
	int n,ans;
	scanf("%d",&n);
	if(n%2==0){
		ans = n/2;
		printf("%d\n",ans);
		for (int i = 0; i < ans; ++i)
		{
			printf("%d ",2);
		}
		printf("\n");
	}
	else if(n==3){
		printf("%d\n",1);
		printf("%d\n",3);
	}else{
		n = n-3;
		ans = n/2;
		printf("%d\n",ans+1);
		for (int i = 0; i < ans; ++i)
		{
			printf("%d ",2);
		}
		printf("%d\n",3);
	}



	
	return 0;
}