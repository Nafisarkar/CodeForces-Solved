// File:486A_Calculationg_Function.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	long long int n,a;
	scanf("%lld",&n);
	if(n%2 ==0){
		a = n/2;
	}
	else{
		a = ((n+1)/2)*(-1);
	}
	printf("%lld\n",a);
	return 0;
}