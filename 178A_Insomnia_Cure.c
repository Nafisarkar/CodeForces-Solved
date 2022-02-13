// File:178A_Insomnia_Cure.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include"inout.h"

int main(){
	//inout();
	int k,l,m,n,d;
	scanf("%d",&k);
	scanf("%d",&l);
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&d);

	int temp = d;
	if((k==1)||(l==1)||(m==1)||(n==1)){
		printf("%d",d);
	}
	else{
		for(int i = 1; i <= d; i++)
        {
            if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0))
                temp--;
        }
        printf("%d",temp);
	}

	return 0;
}