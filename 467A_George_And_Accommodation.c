// File:467A_George_And_Accommodation.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int n;
	scanf("%d",&n);
	int res=0;
	for(int i=0;i<n;i++){
		int j,k;
		scanf("%d %d",&j,&k);
		j=j+2;
		if(j<=k){
			res++;
		}	
	}
	printf("%d\n",res);
	return 0;
}